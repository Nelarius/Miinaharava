#ifndef TILESTATE_H
#define TILESTATE_H

class TileStateManager;
class TileDrawableSprite;

/// \brief A generic model for a tile state.
class TileState
{
    public:
        TileState(TileStateManager*);
        virtual ~TileState();

        /// \brief This code is called whenever this state is activated.
        virtual void activate(TileDrawableSprite*) = 0;

        /// \brief This code is called whenever this state is deactivated.
        virtual void deactivate(TileDrawableSprite*) = 0;

        /// \brief Handle a left click.
        virtual bool leftClick(TileDrawableSprite*) = 0;

        /// \brief Handle a right click.
        virtual bool rightClick(TileDrawableSprite*) = 0;

        /// \brief Return the enumeration of this state as enumerated in TileStateManager.
        virtual const int getState() const = 0;

    protected:
        TileStateManager* _owner;
};

#endif // TILESTATE_H
