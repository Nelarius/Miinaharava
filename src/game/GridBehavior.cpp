#include "GridBehavior.h"
#include "engine/App.h"
#include "engine/stdincl.h"
#include "engine/AppState.h"

#include <game/TileEntity.h>

GridBehavior::GridBehavior() : _score(0)
{
    unsigned int highest = App::getInstance()->getEntityManager().getHighestAvailableIdent();
    TileEntity* tile = new TileEntity();
    tile->getDrawable()->setPosition(0.0, 0.0);
    App::getInstance()->getEntityManager().add(highest, tile);
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
        if (event.type == sf::Event::MouseButtonPressed)
        {
            App::getInstance()->getAppStateManager().setActiveAppState(AppState::SplashScreen);
        }

        if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
        {
            App::getInstance()->getWindow().close();
        }
    }
}

unsigned int GridBehavior::getIndex(int x, int y)
{
    return 0u;
}

bool GridBehavior::cascade(unsigned int index)
{
    return false;
}
