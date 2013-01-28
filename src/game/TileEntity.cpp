#include <game/TileEntity.h>
#include <game/TileBehavior.h>
#include <game/TileDrawableSprite.h>

TileEntity::TileEntity()
{
    _entityBehavior = new TileBehavior();
    _entityDrawable = new TileDrawableSprite();
}

TileEntity::~TileEntity()
{
    delete _entityBehavior;
    delete _entityDrawable;
}
