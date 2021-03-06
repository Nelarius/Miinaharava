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

void TileStateUncovered::activate(TileDrawableSprite* tile)
{
    //
}

void TileStateUncovered::deactivate(TileDrawableSprite* tile)
{
    //
}

bool TileStateUncovered::leftClick(TileDrawableSprite* tile)
{
    return false;
}

bool TileStateUncovered::rightClick(TileDrawableSprite*)
{
    return false;
}

const int TileStateUncovered::getState() const
{
    return TileStateManager::Uncovered;
}
