#ifndef TILESTATEUNCOVERED_H
#define TILESTATEUNCOVERED_H

#include <game/TileState.h>

class TileStateManager;

class TileStateUncovered : public TileState
{
    public:
        TileStateUncovered(TileStateManager*);
        ~TileStateUncovered();

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

    private:
};

#endif // TILESTATEUNCOVERED_H
