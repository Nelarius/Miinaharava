#ifndef GRIDBEHAVIOR_H
#define GRIDBEHAVIOR_H

#include "engine/Behavior.h"

class GridBehavior : public Behavior
{
    public:
        GridBehavior();
        ~GridBehavior();

        void update();
};

#endif // GRIDBEHAVIOR_H
