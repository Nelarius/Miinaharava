#ifndef TILESTATECOVERED_H
#define TILESTATECOVERED_H

#include <game/TileState.h>

class TileStateManager;

class TileStateCovered : public TileState
{
    public:
        TileStateCovered(TileStateManager*);
        ~TileStateCovered();

        void activate(TileDrawableSprite* tile);
        void deactivate(TileDrawableSprite* tile);

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    private:
};

#endif // TILESTATECOVERED_H
