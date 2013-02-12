#ifndef TILESTATEUNCERTAIN_H
#define TILESTATEUNCERTAIN_H

#include <game/TileState.h>

class TileStateUncertain : public TileState
{
    public:
        TileStateUncertain(TileStateManager*);
        ~TileStateUncertain();

        void activate(TileDrawableSprite* tile);
        void deactivate(TileDrawableSprite* tile);

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    private:
};

#endif // TILESTATEUNCERTAIN_H
