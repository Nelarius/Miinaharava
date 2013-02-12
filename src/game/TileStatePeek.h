#ifndef TILESTATEPEEK_H
#define TILESTATEPEEK_H

#include <game/TileState.h>


class TileStatePeek : public TileState
{
    public:
        TileStatePeek(TileStateManager*);
        ~TileStatePeek();

        void activate(TileDrawableSprite* tile);
        void deactivate(TileDrawableSprite* tile);

        bool leftClick(TileDrawableSprite*);
        bool rightClick(TileDrawableSprite*);

        const int getState() const;

    protected:
    private:
};

#endif // TILESTATEPEEK_H
