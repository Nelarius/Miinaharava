#include <game/AppStateSplashScreen.h>
#include <game/SplashScreenEntity.h>
#include <game/SplashScreenSpriteEntity.h>
#include <engine/DrawableSprite.h>
#include <game/Parameters.h>
#include <engine/App.h>    //for window reference
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

    SplashScreenSpriteEntity* ssse = new SplashScreenSpriteEntity();
    DrawableSprite* sprite = dynamic_cast<DrawableSprite*>(ssse->getDrawable());
    sprite->load("textures/splashscreenimage.png");
    sprite->setPosition(Parameters::ScreenWidth() / 5, Parameters::ScreenHeight() / 5);

    App::getInstance()->getEntityManager().add(highest + 1, ssse);
}

void AppStateSplashScreen::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
}
