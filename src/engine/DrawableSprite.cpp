#include "engine/DrawableSprite.h"
#include "engine/App.h" //for TextureManager reference

DrawableSprite::DrawableSprite() : _isLoaded(false)
{
    //ctor
}

DrawableSprite::~DrawableSprite()
{
    //dtor
}

void DrawableSprite::load(const std::string file)
{
    sf::Texture* texture = App::getInstance()->getTextureManager().getTexture(file);
    _sprite.setTexture(*texture);
    _isLoaded = true;
}

void DrawableSprite::draw(sf::RenderWindow& window)
{
    if (_isLoaded)
    {
        window.draw(_sprite);
    }
}

sf::Vector2f DrawableSprite::getPosition() const
{
    if (_isLoaded)
    {
        return _sprite.getPosition();
    }

    return sf::Vector2f();
}

void DrawableSprite::setPosition(float x, float y)
{
    _sprite.setPosition(x, y);
}

bool DrawableSprite::isLoaded() const
{
    return _isLoaded;
}

sf::Sprite& DrawableSprite::getSprite()
{
    return _sprite;
}
