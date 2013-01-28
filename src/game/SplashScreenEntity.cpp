#include "game/SplashScreenEntity.h"
#include "game/SplashScreenBehavior.h"
#include <game/SplashScreenDrawable.h>

SplashScreenEntity::SplashScreenEntity()
{
    _entityBehavior = new SplashScreenBehavior();
    _entityDrawable = new SplashScreenDrawable();
}

SplashScreenEntity::~SplashScreenEntity()
{
    delete _entityBehavior;
}
