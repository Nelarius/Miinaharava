#ifndef TEXTRECTANGLEENTITY_H
#define TEXTRECTANGLEENTITY_H

#include <engine/Entity.h>
#include <string>

/// \brief The container class for DrawableTextRectangle.
class TextRectangleEntity : public Entity
{
    public:
        /// \brief Construct with the text which is to be displayed upon drawing.
        /// \param text The text to be displayed.
        TextRectangleEntity(const std::string text);
        ~TextRectangleEntity();

        /// \brief Set the position of the top left corner of the rectangle.
        /// \param x The x-coordinate.
        /// \param y The y-cordinate.
        void setPosition(float x, float y);

        /// \brief Check if a point is within the boundary of the reactangle.
        bool isWithinBoundary(int x, int y);

        float getWidth() const;
        float getHeight() const;
};

#endif // TEXTRECTANGLEENTITY_H
