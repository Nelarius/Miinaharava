#include "TileStateManager.h"
#include <game/TileState.h>
#include <game/TileStateCovered.h>
#include <game/TileStateUncovered.h>
#include <game/TileStateFlagged.h>
#include <game/TileStateUncertain.h>

/// \brief The constructor sets the tile state to covered by default.
///
/// \param
/// \param
/// \return
///
///

TileStateManager::TileStateManager()
{
    _covered = new TileStateCovered(this);
    _uncovered = new TileStateUncovered(this);
    _currentState = _covered;
}

TileStateManager::~TileStateManager()
{
    delete _covered;
    delete _uncovered;
}

void TileStateManager::changeState(int id)
{
    switch (id)
    {
        case Covered    :   _currentState = _covered;
                            break;

        case Uncovered  :   _currentState = _uncovered;
                            break;
    }
}

bool TileStateManager::leftClick(TileDrawableSprite* tile)
{
    return _currentState->leftClick(tile);
}

bool TileStateManager::rightClick(TileDrawableSprite* tile)
{
    return _currentState->rightClick(tile);
}


