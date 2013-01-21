#include "GridBehavior.h"
#include "engine/App.h"
#include "engine/stdincl.h"
#include "engine/AppState.h"

GridBehavior::GridBehavior()
{
    //ctor
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
