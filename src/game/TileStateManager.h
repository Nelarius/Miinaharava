#ifndef TILESTATEMANAGER_H
#define TILESTATEMANAGER_H

class TileState;
class TileStateCovered;
class TileStateUncovered;
class TileStateFlagged;
class TileStateUncertain;
class TileDrawableSprite;

class TileStateManager
{
    public:
        TileStateManager();
        ~TileStateManager();

        void changeState(int id);

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

        enum
        {
            Covered,
            Uncovered,
            Flagged,
            Uncertain,
            Mine
        };

    private:
        TileState* _currentState;

        TileStateCovered* _covered;
        TileStateUncovered* _uncovered;

};

#endif // TILESTATEMANAGER_H
