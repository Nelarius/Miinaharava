#include "TileStateUncovered.h"
#include <game/TileStateManager.h>
#include <game/TileDrawableSprite.h>

TileStateUncovered::TileStateUncovered(TileStateManager* owner) : TileState(owner)
{
    //ctor
}

TileStateUncovered::~TileStateUncovered()
{
    //dtor
}

bool TileStateUncovered::leftClick(TileDrawableSprite* tile)
{
    _owner->changeState(TileStateManager::Covered);
    tile->setActiveSprite(TileStateManager::Covered);
    return true;
}

bool TileStateUncovered::rightClick(TileDrawableSprite*)
{
    return false;
}
