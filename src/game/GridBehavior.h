#ifndef GRIDBEHAVIOR_H
#define GRIDBEHAVIOR_H

#include "engine/Behavior.h"

class GridBehavior : public Behavior
{
    public:
        GridBehavior();
        ~GridBehavior();

        void update();

    private:
        //methods
        unsigned int getIndex(int x, int y);
        float getX(unsigned int index);
        float getY(unsigned int index);

        bool cascade(unsigned int index);
        void placeMines();

        //attributes:
        int _score;
        bool _firstClick;
};

#endif // GRIDBEHAVIOR_H
