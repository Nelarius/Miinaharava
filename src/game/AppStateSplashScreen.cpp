#include "game/AppStateSplashScreen.h"
#include "game/SplashScreenEntity.h"
#include "engine/App.h"    //for window reference

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
    App::getInstance()->getEntityManager().add(1, new SplashScreenEntity());
}

void AppStateSplashScreen::deactivate()
{

    App::getInstance()->getEntityManager().removeAll();
}
