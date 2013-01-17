#include "engine/Drawable.h"
#include "engine/App.h" //for TextureManager reference

Drawable::Drawable() : _isLoaded(false)
{
    //ctor
}

Drawable::~Drawable()
{
    //dtor
}

void Drawable::load(const std::string file)
{
    sf::Texture* texture = App::getTextureManager();
    _sprite.setTexture(*texture);
    _isLoaded = true;
}

void Drawable::draw(sf::RenderWindow& window)
{
    if (_isLoaded)
    {
        window.draw(_sprite);
    }
}

sf::Vector2f Drawable::getPosition() const
{
    if (_isLoaded)
    {
        return _sprite.getPosition();
    }

    return sf::Vector2f();
}

void Drawable::setPosition(float x, foat y)
{
    _sprite.setPosition(x, y);
}

bool Entity::isLoaded() const
{
    return _isLoaded;
}
