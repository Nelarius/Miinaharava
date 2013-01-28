#include <game/TileEntity.h>
#include <game/TileDrawableSprite.h>

TileEntity::TileEntity()
{
    _entityBehavior = 0;
    _entityDrawable = new TileDrawableSprite();
}

TileEntity::~TileEntity()
{
    delete _entityDrawable;
}
