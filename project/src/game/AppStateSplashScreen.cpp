#include "AppStateSplashScreen.h"
#include "App.h"    //for window reference

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
    App::getInstance()->getWindow().clear(sf::Color(0,0,0,255));
}

void AppStateSplashScreen::deactivate()
{
    //
}
