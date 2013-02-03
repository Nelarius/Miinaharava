#include <game/TileStateFlagged.h>
#include <game/TileStateManager.h>
#include <game/TileDrawableSprite.h>

TileStateFlagged::TileStateFlagged(TileStateManager* owner) : TileState(owner)
{
    //ctor
}

TileStateFlagged::~TileStateFlagged()
{
    //dtor
}

bool TileStateFlagged::leftClick(TileDrawableSprite* tile)
{
    return false;
}

bool TileStateFlagged::rightClick(TileDrawableSprite* tile)
{
    _owner->changeState(TileStateManager::Uncertain);
    tile->setActiveSprite(TileStateManager::Uncertain);
    return false;
}

const int TileStateFlagged::getState() const
{
    return TileStateManager::Flagged;
}
