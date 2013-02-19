#include <game/SplashScreenBehavior.h>
#include <engine/App.h>
#include <engine/AppState.h>

SplashScreenBehavior::SplashScreenBehavior()
{
    _start = _clock.getElapsedTime();
}

SplashScreenBehavior::~SplashScreenBehavior()
{
    //dtor
}

void SplashScreenBehavior::update()
{
    App::getInstance()->getWindow().clear(sf::Color::Black);

    sf::Time time = _clock.getElapsedTime();

    //wait two seconds
    if (time < _start + sf::seconds(1.5))
    {
        return;
    }

    App::getInstance()->getAppStateManager().setActiveAppState(AppState::Menu);

}
