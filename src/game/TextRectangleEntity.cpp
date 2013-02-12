#include <game/TextRectangleEntity.h>
#include <game/DrawableTextRectangle.h>

TextRectangleEntity::TextRectangleEntity(const std::string text)
{
    _entityBehavior = 0;
    _entityDrawable = new DrawableTextRectangle(text);
}

TextRectangleEntity::~TextRectangleEntity()
{
    delete _entityDrawable;
}

void TextRectangleEntity::setPosition(float x, float y)
{
    _entityDrawable->setPosition(x, y);
}

bool TextRectangleEntity::isWithinBoundary(int x, int y)
{
    return dynamic_cast<DrawableTextRectangle*>(_entityDrawable)->isWithinBoundary(x, y);
}

float TextRectangleEntity::getWidth() const
{
    return dynamic_cast<DrawableTextRectangle*>(_entityDrawable)->getWidth();
}

float TextRectangleEntity::getHeight() const
{
    return dynamic_cast<DrawableTextRectangle*>(_entityDrawable)->getHeight();
}
