#include <game/TileStatePeek.h>
#include <game/TileDrawableSprite.h>
#include <game/TileStateManager.h>

TileStatePeek::TileStatePeek(TileStateManager* owner) : TileState(owner)
{
    //ctor
}

TileStatePeek::~TileStatePeek()
{
    //dtor
}

void TileStatePeek::activate(TileDrawableSprite* tile)
{
    tile->setActiveSprite(TileStateManager::Uncovered);
}

void TileStatePeek::deactivate(TileDrawableSprite* tile)
{
    tile->setActiveSprite(TileStateManager::Covered);
}

bool TileStatePeek::leftClick(TileDrawableSprite* tile)
{
    return false;
}

bool TileStatePeek::rightClick(TileDrawableSprite* tile)
{
    return false;
}

const int TileStatePeek::getState() const
{
    return TileStateManager::Peek;
}
