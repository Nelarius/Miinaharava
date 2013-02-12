#ifndef DRAWABLETEXTRECTANGLE_H
#define DRAWABLETEXTRECTANGLE_H

#include <engine/Drawable.h>
#include <string>

/// \brief An invisible rectangle containing text.
///
/// This class is intended to be used as the text buttons in a GUI.
class DrawableTextRectangle : public Drawable
{
    public:
        /// \brief Construct the button with the text to be displayed.
        /// \param text The string to be displayed.
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
