#ifndef TILEDRAWABLESPRITE_H
#define TILEDRAWABLESPRITE_H

#include "engine/DrawableSprite.h"
#include <game/TileStateManager.h>

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
        virtual void setPosition(float x, float y);

        bool leftClick();
        bool rightClick();

        void setActiveSprite(int id);

        bool hasMine() const;
        void placeMine();

    private:
        sf::Texture* _coveredTexture;
        sf::Texture* _uncoveredTexture;
        sf::Texture* _mineTexture;

        TileStateManager _stateManager;

        bool _hasMine;
};

#endif // TILEDRAWABLESPRITE_H
