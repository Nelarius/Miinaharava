#include "MenuDrawable.h"
#include <iostream>

MenuDrawable::MenuDrawable()
{
    _text = sf::Text("Menu screen");
    sf::Font font;
    if (font.loadFromFile("fonts/data-latin.ttf"))
    {
        //_text.setFont(font);
        #ifdef DEBUG
        std::cout << "Loaded font." << std::endl;
        #endif // DEBUG
    }

    _text.setCharacterSize(20);
    _text.setColor(sf::Color::Red);
    _text.setPosition(30.0,30.0);
}

MenuDrawable::~MenuDrawable()
{
    //dtor
}

void MenuDrawable::draw(sf::RenderWindow& window)
{
    window.draw(_text);
}
