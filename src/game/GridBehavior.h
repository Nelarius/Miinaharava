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
        bool cascade(unsigned int index);

        //attributes:
        int _score;
};

#endif // GRIDBEHAVIOR_H
