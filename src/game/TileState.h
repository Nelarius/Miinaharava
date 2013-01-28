#ifndef TILESTATE_H
#define TILESTATE_H

class TileStateManager;

class TileState
{
    public:
        TileState();
        virtual ~TileState();

        virtual bool leftClick(TileStateManager*) = 0;
        virtual bool rightClick(TileStateManager*) = 0;

    protected:
        //reference owning TileStateBehavior??
};

#endif // TILESTATE_H
