#ifndef SPLASHSCREENBEHAVIOR_H
#define SPLASHSCREENBEHAVIOR_H

#include <engine/Behavior.h>

class SplashScreenBehavior : public Behavior
{
    public:
        SplashScreenBehavior();
        ~SplashScreenBehavior();

        void update();
};

#endif // SPLASHSCREENBEHAVIOR_H
