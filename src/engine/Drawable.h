#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <string>
#include "engine/Drawable.h"
#include "engine/stdincl.h"

namespace sf
{
    class RenderWindow;
}

class Drawable
{
    public:
        Drawable();
        virtual ~Drawable();

        virtual void setPosition(float, float);
        virtual void draw(sf::RenderWindow&) = 0;
};

#endif // DRAWABLE_H