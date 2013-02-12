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

        /// \brief Loads all the textures associated with this Drawable.
        virtual void load();

        /// \brief Set the position of the top left corner of this Drawable.
        /// \param x The x-coordinate.
        /// \param y The y-coordinate.
        virtual void setPosition(float x, float y);

        /// \brief Inherited from Drawable.
        virtual void draw(sf::RenderWindow&);

        /// \brief Uncover the tile with a left click.
        /// \return False, if there was no mine on this tile, true if a mine was found.
        ///
        /// A left click will uncover a previously untouched mine. Left clicking an already uncovered mine does nothing.
        bool leftClick();

        /// \brief Cycle through the flag and uncertain state.
        /// \return When cycling into the flag state, true will be returned if a mine was present. False in all other circumstances.
        bool rightClick();

        /// \brief Set which sprite is to be displayed.
        /// \param id The sprite id as enumerated in TileStateManager.
        void setActiveSprite(int id);

        /// \brief Check whether this tile has a mine.
        /// \return True, if the tile has a mine.
        bool hasMine() const;

        /// \brief Tell this tile to place a mine on itself.
        void placeMine();

        /// \brief Get the state that this tile is currently in.
        /// \return The state as enumerated in TileStateManager.
        const int getState() const;

        /// \brief Display a number on this tile.
        /// \param count THe number to be displayed.
        void displayCount(int count);

        /// \brief Get the number which is currently being displayed.
        int getCount() const;

        /// \brief Tell this tile to switch to a new state.
        /// \param state The state to switch to as enumerated in TileStateManager.
        void setState(int state);

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
