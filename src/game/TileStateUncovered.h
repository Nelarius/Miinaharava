#ifndef TILESTATEUNCOVERED_H
#define TILESTATEUNCOVERED_H

#include <game/TileState.h>

class TileStateManager;

/// \brief This TileState corresponds to showing the uncovered tile.
class TileStateUncovered : public TileState
{
    public:
        TileStateUncovered(TileStateManager*);
        ~TileStateUncovered();

        void activate(TileDrawableSprite* tile);
        void deactivate(TileDrawableSprite* tile);

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    private:
};

#endif // TILESTATEUNCOVERED_H
