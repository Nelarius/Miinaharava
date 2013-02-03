#ifndef TILESTATEFLAGGED_H
#define TILESTATEFLAGGED_H

#include <game/TileState.h>

class TileStateFlagged : public TileState
{
    public:
        TileStateFlagged(TileStateManager*);
        ~TileStateFlagged();

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    private:
};

#endif // TILESTATEFLAGGED_H
