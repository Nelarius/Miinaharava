#include <game/GridBehavior.h>
#include <engine/App.h>
#include <engine/stdincl.h>
#include <engine/AppState.h>

#include <game/TileEntity.h>
#include <game/TileDrawableSprite.h>
#include <game/Parameters.h>
#include <utilities/LinGen.h>
#include <ctime>
#include <algorithm>

#include <iostream>

GridBehavior::GridBehavior() : _score(0), _firstClick(true), _bothMouseButtonsWereDown(false), _mousePressedDownAt(0),
                               _freezeScreen(false)
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
    //Handle screen freee in case mine is hit:
    sf::Time time = _clock.getElapsedTime();
    if (_freezeScreen)
    {
        if (time > _start + sf::seconds(2.0))
        {
            App::getInstance()->getAppStateManager().setActiveAppState(AppState::Menu);
        }
        return;
    }

    //Handle events:
    sf::Event event;
    while (App::getInstance()->getWindow().pollEvent(event))
    {
        if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
        {
            App::getInstance()->getWindow().close();
        }

        if (event.type == sf::Event::MouseButtonReleased and _bothMouseButtonsWereDown)
        {
            handleBothMouseButtonsReleased();
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (_firstClick)
            {
                _firstClick = false;
                placeMines(getIndex(event.mouseButton.x, event.mouseButton.y));
            }

            //check real-time input for both mouse buttons pressed
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) and sf::Mouse::isButtonPressed(sf::Mouse::Right))
            {
                handleBothMouseButtonsPressedDown(event);
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

    if (tile->leftClick())
    {
        handleMineHit();
        return;
    }

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
    if (isOnEdge(index))
    {
        std::cout << "Detected edge" << std::endl;
        return count;
    }

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

int GridBehavior::getAdjacentFlags(unsigned int index)
{
    int count = 0;
    if (isOnEdge(index))
    {
        std::cout << "Detected edge" << std::endl;
        return count;
    }

    for (int row = -Parameters::GridWidth() - 2; row <= (int) Parameters::GridWidth() + 2; row += Parameters::GridWidth() + 2)
    {
        for (int column = -1; column <= 1; column++)
        {
            TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index + row + column)->getDrawable());
            if (tile->getState() == TileStateManager::Flagged)
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
        handleMineHit();
    }

    cascade(index);
}

void GridBehavior::handleRightClick(sf::Event& event)
{
    int index = getIndex(event.mouseButton.x, event.mouseButton.y);
    TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index)->getDrawable());

    if (tile->rightClick())
    {
        _score++;
    }

    if (_score == (int) _mines.size())
    {
        _start = _clock.getElapsedTime();
        _freezeScreen = true;
    }
}

void GridBehavior::handleBothMouseButtonsPressedDown(sf::Event& event)
{
    _bothMouseButtonsWereDown = true;
    _mousePressedDownAt = getIndex(event.mouseButton.x, event.mouseButton.y);
    setSurroundingToPeek(_mousePressedDownAt);
}

void GridBehavior::handleBothMouseButtonsReleased()
{
    _bothMouseButtonsWereDown = false;

    setSurroundingToCovered(_mousePressedDownAt);
    TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(_mousePressedDownAt)->getDrawable());

    //check that flag count corresponds to the mine count:
    if (tile->getCount() == getAdjacentFlags(_mousePressedDownAt))
    {
        //cascade(index);
        for (int row = -Parameters::GridWidth() - 2; row <= (int) Parameters::GridWidth() + 2; row += Parameters::GridWidth() + 2)
        {
            for (int column = -1; column <= 1; column++)
            {
                cascade(_mousePressedDownAt + row + column);
            }
        }
    }
}

void GridBehavior::setSurroundingToPeek(unsigned int index)
{
    //Peek surrounding tiles
    for (int row = -Parameters::GridWidth() - 2; row <= (int) Parameters::GridWidth() + 2; row += Parameters::GridWidth() + 2)
    {
        for (int column = -1; column <= 1; column++)
        {
            unsigned int surrounding_index = index + row + column;
            TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(surrounding_index)->getDrawable());
            if (tile->getState() == TileStateManager::Covered)
            {
                tile->setState(TileStateManager::Peek);
            }
        }
    }
}

void GridBehavior::setSurroundingToCovered(unsigned int index)
{
    //set Peek state back to covered:
    for (int row = -Parameters::GridWidth() - 2; row <= (int) Parameters::GridWidth() + 2; row += Parameters::GridWidth() + 2)
    {
        for (int column = -1; column <= 1; column++)
        {
            unsigned int surrounding_index = index + row + column;
            TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(surrounding_index)->getDrawable());
            if (tile->getState() == TileStateManager::Peek)
            {
                tile->setState(TileStateManager::Covered);
            }
        }
    }
}

void GridBehavior::revealMines()
{
    std::for_each(_mines.begin(), _mines.end(), MineRevealer());
}

bool GridBehavior::isOnEdge(unsigned int index) const
{
    return  int (index / (Parameters::GridWidth() + 2)) == 0 or
            int (index / (Parameters::GridWidth() + 2)) == Parameters::GridHeight() + 1 or
            int (index + 1 % (Parameters::GridWidth() + 1)) == 0 or
            int (index + 1 % (Parameters::GridWidth() + 2)) == Parameters::GridWidth() + 1;
}

void GridBehavior::handleMineHit()
{
    revealMines();
    //start countdown timer:
    _start = _clock.getElapsedTime();
    _freezeScreen = true;
}
