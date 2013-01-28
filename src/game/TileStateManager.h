#ifndef TILESTATEMANAGER_H
#define TILESTATEMANAGER_H

class TileState;
class TileStateCovered;
class TileStateUncovered;
class TileStateFlagged;
class TileStateUncertain;

class TileStateManager
{
    public:
        TileStateManager();
        ~TileStateManager();

        /*void changeState(int id);

        bool leftClick();
        bool rightClick();
        */
        enum
        {
            Covered,
            Uncovered,
            Flagged,
            Uncertain
        };

    private:
        TileState* _currentState;

        TileStateCovered* _covered;
        TileStateUncovered* _uncovered;
        TileStateFlagged* _flagged;
        TileStateUncertain* _uncertain;

};

#endif // TILESTATEMANAGER_H
