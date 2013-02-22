#ifndef TILESTATEFLAGGED_H
#define TILESTATEFLAGGED_H

#include <game/TileState.h>

/// \brief The Flagged state.
class TileStateFlagged : public TileState
{
    public:
        TileStateFlagged(TileStateManager*);
        ~TileStateFlagged();

        void activate(TileDrawableSprite* tile);
        void deactivate(TileDrawableSprite* tile);

        /// \brief Handle a left click on a flagged mine.
        /// \return Always false.
        ///
        /// Left clicking on a flagged mine does nothing, and thus this method has no result.
        bool leftClick(TileDrawableSprite*);

        /// \brief Handle a right click on a flagged mine.
        /// \return Always false.
        ///
        /// The result of this action is to switch to TileStateUncertain.
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    private:
};

#endif // TILESTATEFLAGGED_H
