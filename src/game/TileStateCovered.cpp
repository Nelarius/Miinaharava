#include <game/TileStateCovered.h>
#include <game/TileStateManager.h>
#include <game/TileDrawableSprite.h>

#include <iostream>

TileStateCovered::TileStateCovered(TileStateManager* owner) : TileState(owner)
{
    //ctor
}

TileStateCovered::~TileStateCovered()
{
    //dtor
}

void TileStateCovered::activate(TileDrawableSprite* tile)
{
    //
}

void TileStateCovered::deactivate(TileDrawableSprite* tile)
{
    //
}

//returns true if the tile has a mine
bool TileStateCovered::leftClick(TileDrawableSprite* tile)
{
    if (tile->hasMine())
    {
        tile->setActiveSprite(TileStateManager::Mine);
        return true;
    }

    _owner->changeState(TileStateManager::Uncovered);
    tile->setActiveSprite(TileStateManager::Uncovered);

    return false;
}

bool TileStateCovered::rightClick(TileDrawableSprite* tile)
{
    _owner->changeState(TileStateManager::Flagged);
    tile->setActiveSprite(TileStateManager::Flagged);
    return false;
}

const int TileStateCovered::getState() const
{
    return TileStateManager::Covered;
}
