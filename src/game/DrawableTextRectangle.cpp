#include <game/DrawableTextRectangle.h>
#include <engine/stdincl.h>

#include <iostream>

DrawableTextRectangle::DrawableTextRectangle(const std::string text)
{
    _text = sf::Text(text);
    _text.setCharacterSize(30);
    _text.setColor(sf::Color::White);
}

DrawableTextRectangle::~DrawableTextRectangle()
{
    //dtor
}

void DrawableTextRectangle::setPosition(float x, float y)
{
    _text.setPosition(x, y);
}

void DrawableTextRectangle::draw(sf::RenderWindow& window)
{
    window.draw(_text);
}

bool DrawableTextRectangle::isWithinBoundary(int x, int y)
{
    sf::FloatRect rect = _text.getGlobalBounds();
    return (x >= rect.left and x <= rect.left + rect.width) and
           (y >= rect.top and y <= rect.top + rect.height);
}

float DrawableTextRectangle::getWidth() const
{
    sf::FloatRect rect = _text.getLocalBounds();
    return rect.width;
}

float DrawableTextRectangle::getHeight() const
{
    sf::FloatRect rect = _text.getLocalBounds();
    return rect.height;
}
