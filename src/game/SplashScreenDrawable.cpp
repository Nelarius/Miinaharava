#include "SplashScreenDrawable.h"
#include <engine/stdincl.h>

SplashScreenDrawable::SplashScreenDrawable()
{
    _text = sf::Text("splashscreen");
    sf::Font font;
    font.loadFromFile("fonts/data-latin.ttf");
    _text.setFont(font);
    _text.setCharacterSize(20);
    _text.setColor(sf::Color::Red);
    _text.setPosition(10.0,10.0);
}

SplashScreenDrawable::~SplashScreenDrawable()
{
    //dtor
}

void SplashScreenDrawable::draw(sf::RenderWindow& window)
{
    window.draw(_text);
}
