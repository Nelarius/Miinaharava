#ifndef SPLASHSCREENDRAWABLE_H
#define SPLASHSCREENDRAWABLE_H

#include "engine/Drawable.h"

namespace sf
{
    class RenderWindow;
}


class SplashScreenDrawable : public Drawable
{
    public:
        SplashScreenDrawable();
        ~SplashScreenDrawable();

        void draw(sf::RenderWindow&);

    private:
};

#endif // SPLASHSCREENDRAWABLE_H
