#include <game/GridBehavior.h>
#include <engine/App.h>
#include <engine/stdincl.h>
#include <engine/AppState.h>

#include <game/TileEntity.h>
#include <game/TileDrawableSprite.h>
#include <game/Parameters.h>
#include <utilities/LinGen.h>
#include <ctime>

#include <iostream>

GridBehavior::GridBehavior() : _score(0), _firstClick(true)
{
    EntityManager& entityManager = App::getInstance()->getEntityManager();

    for (unsigned int i = 0; i < (Parameters::GridWidth() + 2) * (Parameters::GridHeight() + 2); i++)
    {
        TileEntity* tile = new TileEntity();
        tile->getDrawable()->setPosition(getX(i), getY(i));
        entityManager.add(i, tile);

        //tiles are convered by default
        //if the tile is on the border, uncover it
        if ((int (getY(i) / Parameters::TileSize()) > 0 and int (getY(i) / Parameters::TileSize()) < int (Parameters::GridHeight() + 1)) and
            (int (getX(i) / Parameters::TileSize()) > 0 and int (getX(i) / Parameters::TileSize()) < int (Parameters::GridWidth() + 1)))
        {
            continue;
        }

        TileDrawableSprite* tileSprite = dynamic_cast<TileDrawableSprite*>(tile->getDrawable());
        tileSprite->leftClick();
    }
}

GridBehavior::~GridBehavior()
{
    //dtor
}

void GridBehavior::update()
{
    sf::Event event;
    while (App::getInstance()->getWindow().pollEvent(event))
    {
        if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
        {
            App::getInstance()->getWindow().close();
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (_firstClick)
            {
                _firstClick = false;
                placeMines(getIndex(event.mouseButton.x, event.mouseButton.y));
            }

            if (event.mouseButton.button == sf::Mouse::Left)
            {
                #ifdef DEBUG
                std::cout << "index for (" << event.mouseButton.x << ", " << event.mouseButton.y << "): " << getIndex(event.mouseButton.x, event.mouseButton.y) << std::endl;
                #endif //DEBUG

                handleLeftClick(event);
            }

            if (event.mouseButton.button == sf::Mouse::Right)
            {
                handleRightClick(event);
            }
        }
    }
}

void GridBehavior::cascade(unsigned int index)
{
    int count = getAdjacentMines(index);
    TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index)->getDrawable());

    tile->leftClick();

    if (count != 0)
    {
        tile->displayCount(count);
        return;
    }

    for (int row = -Parameters::GridWidth() - 2; row <= int (Parameters::GridWidth() + 2u); row += Parameters::GridWidth() + 2u)
    {
        for (int column = -1; column <= 1; column++)
        {
            TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index + row + column)->getDrawable());
            if (tile->getState() == TileStateManager::Covered)
            {
                cascade(index + row + column);
            }
        }
    }
}

int GridBehavior::getAdjacentMines(unsigned int index)
{
    int count = 0;
    for (int row = -Parameters::GridWidth() - 2; row <= (int) Parameters::GridWidth() + 2; row += Parameters::GridWidth() + 2)
    {
        for (int column = -1; column <= 1; column++)
        {
            TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index + row + column)->getDrawable());
            if (tile->hasMine())
            {
                ++count;
            }
        }
    }
    return count;
}

void GridBehavior::placeMines(unsigned int index)
{
    LinGen::srand(std::time(0));    //seed the generator with the system time
    int x, y, id;
    EntityManager& manager = App::getInstance()->getEntityManager();
    TileDrawableSprite* tile = 0;

    for (int i = 0; i < Parameters::MineCount(); i++)
    {
        do
        {
            //offset to avoid boundary
            x = (Parameters::ScreenWidth() - 1) * LinGen::rand();
            y = (Parameters::ScreenHeight() - 1) * LinGen::rand();
            id = getIndex(x, y);
            tile = dynamic_cast<TileDrawableSprite*>(manager.getEntity(id)->getDrawable());
        }
        while (tile->hasMine() or id == int (index));

        tile->placeMine();
        _mines.insert(id);
    }
}

unsigned int GridBehavior::getIndex(int x, int y)
{
    unsigned int index = (x + Parameters::TileSize()) / Parameters::TileSize();

    index += (unsigned int) ((y + Parameters::TileSize()) / Parameters::TileSize()) * (Parameters::GridWidth() + 2u);

    return index;
}

float GridBehavior::getX(unsigned int index)
{
    float x = (index % (Parameters::GridWidth() + 2u)) * Parameters::TileSize();
    return x;
}

float GridBehavior::getY(unsigned int index)
{
    float y = (index / (Parameters::GridWidth() + 2u)) * Parameters::TileSize();
    return y;
}

void GridBehavior::handleLeftClick(sf::Event& event)
{
    int index = getIndex(event.mouseButton.x, event.mouseButton.y);
    TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index)->getDrawable());
    if (tile->leftClick())
    {
        App::getInstance()->getAppStateManager().setActiveAppState(AppState::Menu);
        return;
    }

    cascade(index);
}

void GridBehavior::handleRightClick(sf::Event& event)
{
    int index = getIndex(event.mouseButton.x, event.mouseButton.y);
    TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index)->getDrawable());
    tile->rightClick();
}
