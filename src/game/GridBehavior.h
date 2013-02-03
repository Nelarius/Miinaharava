#ifndef GRIDBEHAVIOR_H
#define GRIDBEHAVIOR_H

#include <engine/Behavior.h>
#include <set>

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
        void placeMines(unsigned int);

        void handleLeftClick(sf::Event& event);
        void handleRightClick(sf::Event& event);

        //attributes:
        int _score;
        bool _firstClick;

        std::set<int> _mines;   //stores references to placed mine indices
};

#endif // GRIDBEHAVIOR_H
