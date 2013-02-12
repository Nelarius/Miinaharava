#ifndef TEXTRECTANGLEENTITY_H
#define TEXTRECTANGLEENTITY_H

#include <engine/Entity.h>
#include <string>


class TextRectangleEntity : public Entity
{
    public:
        TextRectangleEntity(const std::string text);
        ~TextRectangleEntity();

        void setPosition(float x, float y);

        bool isWithinBoundary(int x, int y);

        float getWidth() const;
        float getHeight() const;
};

#endif // TEXTRECTANGLEENTITY_H
