#ifndef MENUBEHAVIOR_H
#define MENUBEHAVIOR_H

#include <engine/Behavior.h>


class MenuBehavior : public Behavior
{
    public:
        MenuBehavior();
        ~MenuBehavior();

        virtual void update();
    private:
};

#endif // MENUBEHAVIOR_H