#ifndef TILESTATEPEEK_H
#define TILESTATEPEEK_H

#include <game/TileState.h>

/// \brief This state corresponds to temporarily revealing the tile.
class TileStatePeek : public TileState
{
    public:
        TileStatePeek(TileStateManager*);
        ~TileStatePeek();

        void activate(TileDrawableSprite* tile);
        void deactivate(TileDrawableSprite* tile);

        /// \brief This method has no action.
        bool leftClick(TileDrawableSprite*);

        /// \brief This method has no action.
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    protected:
    private:
};

#endif // TILESTATEPEEK_H
