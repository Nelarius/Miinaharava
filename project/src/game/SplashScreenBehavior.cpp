#include "game/SplashScreenBehavior.h"
#include "engine/App.h"
#include "engine/AppState.h"
#include "engine/stdincl.h"

SplashScreenBehavior::SplashScreenBehavior()
{
    //ctor
}

SplashScreenBehavior::~SplashScreenBehavior()
{
    //dtor
}

void SplashScreenBehavior::update()
{
    App::getInstance()->getWindow().clear(sf::Color(204,204,204,255));
    sf::Event event;
    while (App::getInstance()->getWindow().pollEvent(event))
    {
        if (event.type == sf::Event::MouseButtonPressed)
        {
            App::getInstance()->getAppStateManager().setActiveAppState(AppState::Menu);
        }

        if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
        {
            App::getInstance()->getWindow().close();
        }
    }
}
