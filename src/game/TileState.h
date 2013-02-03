#ifndef TILESTATE_H
#define TILESTATE_H

class TileStateManager;
class TileDrawableSprite;

class TileState
{
    public:
        TileState(TileStateManager*);
        virtual ~TileState();

        virtual bool leftClick(TileDrawableSprite*) = 0;
        virtual bool rightClick(TileDrawableSprite*) = 0;

        virtual const int getState() const = 0;

    protected:
        TileStateManager* _owner;
};

#endif // TILESTATE_H
