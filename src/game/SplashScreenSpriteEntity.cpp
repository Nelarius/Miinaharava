#include <game/SplashScreenSpriteEntity.h>
#include <engine/DrawableSprite.h>

SplashScreenSpriteEntity::SplashScreenSpriteEntity()
{
    _entityBehavior = 0;
    _entityDrawable = new DrawableSprite();
}

SplashScreenSpriteEntity::~SplashScreenSpriteEntity()
{
    delete _entityDrawable;
}
