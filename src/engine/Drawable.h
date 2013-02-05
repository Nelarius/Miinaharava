#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <string>
#include <engine/Drawable.h>
#include <engine/stdincl.h>

namespace sf
{
    class RenderWindow;
}

/// \brief This class models a generic drawable type.
class Drawable
{
    public:
        Drawable();
        virtual ~Drawable();

        /// \brief Set the position of your drawable type.
        /// \param x The x-coordinate of the upper left corner.
        /// \param y The y-coordinate of the upper left corner.
        virtual void setPosition(float x, float y);

        /// \brief This method is called during rendering each update loop.
        /// \param window A reference to the window that is currently being rendered to.
        virtual void draw(sf::RenderWindow& window) = 0;
};

#endif // DRAWABLE_H
