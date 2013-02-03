#include <game/TileStateUncertain.h>
#include <game/TIleStateManager.h>
#include <game/TileDrawableSprite.h>

TileStateUncertain::TileStateUncertain(TileStateManager* owner) : TileState(owner)
{
    //ctor
}

TileStateUncertain::~TileStateUncertain()
{
    //dtor
}

bool TileStateUncertain::leftClick(TileDrawableSprite* tile)
{
    return false;
}

bool TileStateUncertain::rightClick(TileDrawableSprite* tile)
{
    _owner->changeState(TileStateManager::Covered);
    tile->setActiveSprite(TileStateManager::Covered);
    return false;
}

const int TileStateUncertain::getState() const
{
    return TileStateManager::Uncertain;
}
