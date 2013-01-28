#ifndef TILEDRAWABLESPRITE_H
#define TILEDRAWABLESPRITE_H

#include "engine/DrawableSprite.h"

namespace sf
{
    class Texture;
}

class TileDrawableSprite : public DrawableSprite
{
    public:
        TileDrawableSprite();
        ~TileDrawableSprite();

        virtual void load();

    private:
        sf::Texture* _testTile;
};

#endif // TILEDRAWABLESPRITE_H
