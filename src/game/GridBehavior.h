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

class GridBehavior : public Behavior
{
    public:
        GridBehavior();
        ~GridBehavior();

        void update();

        //public for testing purposes
        unsigned int getIndex(int x, int y);
        float getX(unsigned int index);
        float getY(unsigned int index);

    private:
        //methods
        //consider doing a handle leftClick which combines methods?
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
        void handleBothMouseButtonsReleased(sf::Event& event);

        //attributes:
        int _score;
        bool _firstClick;
        bool _bothMouseButtonsWereDown;

        std::set<int> _mines;   //stores references to placed mine indices
};

#endif // GRIDBEHAVIOR_H
