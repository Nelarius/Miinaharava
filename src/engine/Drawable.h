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

        virtual void draw(sf::RenderWindow&);
};

#endif // DRAWABLE_H
