#ifndef SPLASHSCREENDRAWABLE_H
#define SPLASHSCREENDRAWABLE_H

#include "engine/Drawable.h"
#include <engine/stdincl.h>

/// \brief subject to change.
class SplashScreenDrawable : public Drawable
{
    public:
        SplashScreenDrawable();
        ~SplashScreenDrawable();

        virtual void draw(sf::RenderWindow&);

    private:
        sf::Text _text;
};

#endif // SPLASHSCREENDRAWABLE_H
