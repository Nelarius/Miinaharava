#ifndef DRAWABLETEXTRECTANGLE_H
#define DRAWABLETEXTRECTANGLE_H

#include <engine/Drawable.h>
#include <string>


class DrawableTextRectangle : public Drawable
{
    public:
        DrawableTextRectangle(const std::string text);
        ~DrawableTextRectangle();

        /// \brief Inherited from Drawable.
        void setPosition(float x, float y);

        /// \brief Inherited from Drawable.
        void draw(sf::RenderWindow& window);

        /// \brief Check whether coordinates are within the text rectangle.
        /// \param x The x coordinate.
        /// \param y The y coordinate.
        /// \return True if the coordinates are withing the rectangle containing the test, false if not.
        bool isWithinBoundary(int x, int y);

        float getWidth() const;
        float getHeight() const;

    private:
        sf::Text _text;
};

#endif // DRAWABLETEXTRECTANGLE_H
