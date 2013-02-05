#include "TileStateManager.h"
#include <game/TileState.h>
#include <game/TileStateCovered.h>
#include <game/TileStateUncovered.h>
#include <game/TileStateFlagged.h>
#include <game/TileStateUncertain.h>
#include <game/TileStatePeek.h>

/// \brief The constructor sets the tile state to covered by default.
///
/// \param
/// \param
/// \return
///
///

TileStateManager::TileStateManager() : _currentState(0), _covered(0), _uncovered(0), _flagged(0), _uncertain(0), _peek(0)
{
    _covered = new TileStateCovered(this);
    _uncovered = new TileStateUncovered(this);
    _flagged = new TileStateFlagged(this);
    _uncertain = new TileStateUncertain(this);
    _peek = new TileStatePeek(this);
    _currentState = _covered;
}

TileStateManager::~TileStateManager()
{
    delete _covered;
    delete _uncovered;
    delete _flagged;
    delete _uncertain;
}

void TileStateManager::changeState(int id)
{
    switch (id)
    {
        case Covered    :   _currentState = _covered;
                            break;

        case Uncovered  :   _currentState = _uncovered;
                            break;

        case Flagged    :   _currentState = _flagged;
                            break;

        case Uncertain  :   _currentState = _uncertain;
                            break;

        case Peek       :   _currentState = _peek;
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

const int TileStateManager::getState() const
{
    return _currentState->getState();
}


