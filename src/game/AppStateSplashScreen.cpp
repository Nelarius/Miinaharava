#include "game/AppStateSplashScreen.h"
#include "game/SplashScreenEntity.h"
#include "engine/App.h"    //for window reference
#include <iostream>

AppStateSplashScreen::AppStateSplashScreen()
{
    //ctor
}

AppStateSplashScreen::~AppStateSplashScreen()
{
    //dtor
}

void AppStateSplashScreen::activate()
{
    unsigned int highest = App::getInstance()->getEntityManager().getHighestAvailableIdent();
    App::getInstance()->getEntityManager().add(highest, new SplashScreenEntity());
    App::getInstance()->getWindow().clear(sf::Color::Black);
}

void AppStateSplashScreen::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
}
