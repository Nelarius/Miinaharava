#ifndef SPLASHSCREENBEHAVIOR_H
#define SPLASHSCREENBEHAVIOR_H

#include <engine/Behavior.h>
#include <engine/stdincl.h>

class SplashScreenBehavior : public Behavior
{
    public:
        SplashScreenBehavior();
        ~SplashScreenBehavior();

        void update();

    private:
        sf::Clock   _clock;
        sf::Time    _start;
};

#endif // SPLASHSCREENBEHAVIOR_H
