#include <game/WinDrawable.h>
#include <string>
#include <sstream>
#include <iostream>
#include <game/Parameters.h>

WinDrawable::WinDrawable()
{
    sf::Font font;
    if (font.loadFromFile("fonts/data-latin.ttf"))
    {
        _text.setFont(font);
        #ifdef DEBUG
        std::cout << "Loaded font." << std::endl;
        #endif // DEBUG
    }
}

void WinDrawable::setText(sf::Time& time)
{
    int minutes = int (time.asSeconds()) / 60;
    int seconds = int (time.asSeconds()) % 60;

    if (Parameters::getDifficulty() == Parameters::Easy)
    {
        setTextForNarrowWindow(minutes, seconds);
    }
    else
    {
        setTextOtherWise(minutes, seconds);
    }

    _text.setCharacterSize(20);
    _text.setColor(sf::Color::White);
    _text.setPosition(Parameters::ScreenWidth() / 2 - _text.getLocalBounds().width / 3,
                      Parameters::ScreenHeight() / 2 - _text.getLocalBounds().height / 2);

    std::cout << "x at " << Parameters::ScreenWidth() / 2 - _text.getLocalBounds().width / 2 << std::endl;
    std::cout << "y at " << Parameters::ScreenHeight() / 2 - _text.getLocalBounds().height / 2 << std::endl;
    std::cout << "Screen dimensions are (" << Parameters::ScreenWidth() << ", " << Parameters::ScreenHeight() << std::endl;
}

void WinDrawable::setTextForNarrowWindow(int minutes, int seconds)
{
    std::stringstream winText;



    if (minutes == 0)
    {
        winText << "Your time: " << seconds << std::endl << " seconds!";
    }
    else
    {
        winText << "Your time: " << std::endl << minutes << " : " << seconds << "!";
    }

    _text = sf::Text(winText.str());
}

void WinDrawable::setTextOtherWise(int minutes, int seconds)
{
    std::stringstream winText;

    if (minutes == 0)
    {
        winText << "Your time: " << seconds << " seconds!";
    }
    else
    {
        winText << "Your time: " << minutes << " : " << seconds << "!";
    }
    _text = sf::Text(winText.str());
}

WinDrawable::~WinDrawable()
{
    //dtor
}

void WinDrawable::draw(sf::RenderWindow& window)
{
    window.draw(_text);
}
