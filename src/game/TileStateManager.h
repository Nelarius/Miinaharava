#ifndef TILESTATEMANAGER_H
#define TILESTATEMANAGER_H

class TileState;
class TileStateCovered;
class TileStateUncovered;
class TileStateFlagged;
class TileStateUncertain;
class TileStatePeek;
class TileDrawableSprite;

class TileStateManager
{
    public:
        TileStateManager();
        ~TileStateManager();

        void changeState(int id);

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

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
        TileState* _currentState;

        TileStateCovered*   _covered;
        TileStateUncovered* _uncovered;
        TileStateFlagged*   _flagged;
        TileStateUncertain* _uncertain;
        TileStatePeek*      _peek;

};

#endif // TILESTATEMANAGER_H
