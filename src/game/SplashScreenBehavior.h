#ifndef SPLASHSCREENBEHAVIOR_H
#define SPLASHSCREENBEHAVIOR_H

#include <engine/Behavior.h>
#include <engine/stdincl.h>

/// \brief The Behavior of the SplashScreen. Defines how long the SplashScreen hangs when the app is opened.
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
