#include "SplashScreenDrawable.h"
#include <engine/stdincl.h>
#include <iostream>

SplashScreenDrawable::SplashScreenDrawable()
{
    _text = sf::Text("Minesweeper");

    sf::Font font;
    if (font.loadFromFile("fonts/data-latin.ttf"))
    {
        //_text.setFont(font);
        #ifdef DEBUG
        std::cout << "Loaded font." << std::endl;
        #endif // DEBUG
    }

    _text.setCharacterSize(30);
    _text.setColor(sf::Color::Red);
    _text.setPosition(60.0,30.0);
}

SplashScreenDrawable::~SplashScreenDrawable()
{
    //dtor
}

void SplashScreenDrawable::draw(sf::RenderWindow& window)
{
    window.draw(_text);
}
