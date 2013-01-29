#include "GridBehavior.h"
#include "engine/App.h"
#include "engine/stdincl.h"
#include "engine/AppState.h"

#include <game/TileEntity.h>
#include <game/TileDrawableSprite.h>
#include <game/Parameters.h>

#include <iostream>

GridBehavior::GridBehavior() : _score(0), _firstClick(true)
{
    EntityManager& entityManager = App::getInstance()->getEntityManager();

    for (unsigned int i = 0; i < GridWidth * GridHeight; i++)
    {
        TileEntity* tile = new TileEntity();
        tile->getDrawable()->setPosition(getX(i), getY(i));
        entityManager.add(i, tile);
    }

    TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(entityManager.getEntity(3u)->getDrawable());
    tile->placeMine();
}

GridBehavior::~GridBehavior()
{
    //dtor
}

void GridBehavior::update()
{
    App::getInstance()->getWindow().clear(sf::Color(225,225,225,225));

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
                placeMines();
            }

            if (event.mouseButton.button == sf::Mouse::Left)
            {
                #ifdef DEBUG
                std::cout << "index for (" << event.mouseButton.x << ", " << event.mouseButton.y << "): " << getIndex(event.mouseButton.x, event.mouseButton.y) << std::endl;
                #endif //DEBUG
                Drawable* drawable = App::getInstance()->getEntityManager().getEntity(getIndex(event.mouseButton.x, event.mouseButton.y))->getDrawable();
                TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(drawable);

                if (tile != NULL)
                {
                    tile->leftClick();
                }
            }

            if (event.mouseButton.button == sf::Mouse::Right)
            {
                App::getInstance()->getAppStateManager().setActiveAppState(AppState::SplashScreen);
            }
        }
    }
}

bool GridBehavior::cascade(unsigned int index)
{
    return false;
}

void GridBehavior::placeMines()
{
    //
}

unsigned int GridBehavior::getIndex(int x, int y)
{
    unsigned int index = ((unsigned int) (x + TileSize)) / ((unsigned int) TileSize);

    index += (((unsigned int) (y + TileSize)) / ((unsigned int) TileSize)) * GridWidth;

    return index - 10u; //Works, but consider changing implementation
}

float GridBehavior::getX(unsigned int index)
{
    float x = (index % GridWidth) * TileSize;
    return x;
}

float GridBehavior::getY(unsigned int index)
{
    float y = (index / GridHeight) * TileSize;
    return y;
}
