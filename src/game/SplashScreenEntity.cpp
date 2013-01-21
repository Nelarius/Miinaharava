#include "game/SplashScreenEntity.h"
#include "game/SplashScreenBehavior.h"

SplashScreenEntity::SplashScreenEntity()
{
    _entityBehavior = new SplashScreenBehavior();
    _entityDrawable = 0;
}

SplashScreenEntity::~SplashScreenEntity()
{
    delete _entityBehavior;
}
