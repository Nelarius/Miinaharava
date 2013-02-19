#ifndef GRIDBEHAVIOR_H
#define GRIDBEHAVIOR_H

#include <engine/Behavior.h>
#include <game/TileDrawableSprite.h>
#include <set>
#include <engine/App.h>

namespace sf
{
    class Event;
}

/// \brief The behavior of a minesweeper grid of any size.
class GridBehavior : public Behavior
{
    public:
        GridBehavior();
        ~GridBehavior();

        /// \brief Inherited from Behavior.
        void update();

        //public for testing purposes
        /// \brief Returns the array index of the tile located at (x, y), offset by one tile row in both directions.
        /// \param x The x-coordinate.
        /// \brief y The y-coordinate.
        /// \return The array index.
        unsigned int getIndex(int x, int y);
        float getX(unsigned int index);
        float getY(unsigned int index);

    private:
        //methods
        void cascade(unsigned int index);
        int getAdjacentMines(unsigned int);
        int getAdjacentFlags(unsigned int);
        void placeMines(unsigned int);
        void revealMines();

        struct MineRevealer
        {
            void operator()(const int index) const
            {
                TileDrawableSprite* tile = dynamic_cast<TileDrawableSprite*>(App::getInstance()->getEntityManager().getEntity(index)->getDrawable());
                tile->leftClick();
            }
        };

        void handleLeftClick(sf::Event& event);
        void handleRightClick(sf::Event& event);
        void handleBothMouseButtonsPressedDown(sf::Event& event);
        void handleBothMouseButtonsReleased();  //does not handle an event

        void setSurroundingToPeek(unsigned int index);
        void setSurroundingToCovered(unsigned int index);

        bool isOnEdge(unsigned int index) const;  //THIS DOESN'T WORK

        void handleMineHit();

        //attributes:
        int _score;
        bool _firstClick;
        bool _bothMouseButtonsWereDown;
        unsigned int _mousePressedDownAt;
        bool _freezeScreen;

        std::set<int> _mines;   //stores references to placed mine indices

        sf::Clock _clock;
        sf::Time _start;
};

#endif // GRIDBEHAVIOR_H
