#ifndef TILESTATECOVERED_H
#define TILESTATECOVERED_H

#include <game/TileState.h>

class TileStateManager;

/// \brief The TileState corresponding to the covered state.
class TileStateCovered : public TileState
{
    public:
        TileStateCovered(TileStateManager*);
        ~TileStateCovered();

        void activate(TileDrawableSprite* tile);
        void deactivate(TileDrawableSprite* tile);

        /// \brief Handle a left click on a covered tile.
        /// \return True if a mine was present, false otherwise.
        ///
        /// The result of this action is to switch to TileStateUncovered, or to display
        /// a mine if a mine was present, while returning true.
        bool leftClick(TileDrawableSprite*);

        /// \brief Handle a right click on a covered tile.
        /// \return True if a mine was present, false otherwise.
        ///
        /// The result of this action is to switch to TileStateFlagged.
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    private:
};

#endif // TILESTATECOVERED_H
