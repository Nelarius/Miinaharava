#ifndef TILESTATEMANAGER_H
#define TILESTATEMANAGER_H

class TileState;
class TileStateCovered;
class TileStateUncovered;
class TileStateFlagged;
class TileStateUncertain;
class TileStatePeek;
class TileDrawableSprite;

/// \brief A manager class for TileStates.
class TileStateManager
{
    public:
        /// \brief Construct the TileStateManager with a pointer to its owner.
        TileStateManager(TileDrawableSprite* owner);
        ~TileStateManager();

        /// \brief Change the current TileState.
        /// \param id The TileState to change to as enumerated below.
        void changeState(int id);

        /// \brief Handles a left click by calling the current TileState's leftClick - method.
        bool leftClick(TileDrawableSprite*);

        /// \brief Handles a right click by calling the current TileState's rightClick - method.
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

        /// \brief Enumerated TileStates.
        enum
        {
            Covered,
            Uncovered,
            Flagged,
            Uncertain,
            Mine,
            Peek
        };

    private:
        TileDrawableSprite* _owner;
        TileState*          _currentState;

        TileStateCovered*   _covered;
        TileStateUncovered* _uncovered;
        TileStateFlagged*   _flagged;
        TileStateUncertain* _uncertain;
        TileStatePeek*      _peek;

};

#endif // TILESTATEMANAGER_H
