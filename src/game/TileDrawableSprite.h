#ifndef TILEDRAWABLESPRITE_H
#define TILEDRAWABLESPRITE_H

#include <engine/DrawableSprite.h>
#include <game/TileStateManager.h>

namespace sf
{
    class Texture;
    class Text;
    class Color;
}

class TileDrawableSprite : public DrawableSprite
{
    public:
        TileDrawableSprite();
        ~TileDrawableSprite();

        virtual void load();
        virtual void setPosition(float x, float y);
        virtual void draw(sf::RenderWindow&);

        bool leftClick();
        bool rightClick();

        void setActiveSprite(int id);

        bool hasMine() const;
        void placeMine();

        const int getState() const;

        void displayCount(int count);

    private:
        void hideCount();
        sf::Texture* _coveredTexture;
        sf::Texture* _uncoveredTexture;
        sf::Texture* _mineTexture;
        sf::Texture* _flagTexture;
        sf::Texture* _qmarkTexture;

        sf::Color*   _colorLookUp;

        int          _adjacentCount;

        TileStateManager _stateManager;

        bool _hasMine;
        bool _showCount;
};

#endif // TILEDRAWABLESPRITE_H
