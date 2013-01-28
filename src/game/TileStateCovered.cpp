#include "TileStateCovered.h"
#include <game/TileStateManager.h>
#include <game/TileDrawableSprite.h>

TileStateCovered::TileStateCovered(TileStateManager* owner) : TileState(owner)
{
    //ctor
}

TileStateCovered::~TileStateCovered()
{
    //dtor
}

bool TileStateCovered::leftClick(TileDrawableSprite* tile)
{
    if (tile->hasMine())
    {
        tile->setActiveSprite(TileStateManager::Mine);
        return false;
    }

    _owner->changeState(TileStateManager::Uncovered);
    tile->setActiveSprite(TileStateManager::Uncovered);
    return true;
}

bool TileStateCovered::rightClick(TileDrawableSprite* tile)
{
    return false;
}
