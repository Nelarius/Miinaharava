#include "MenuBehavior.h"

#include "engine/App.h"
#include "engine/stdincl.h"
#include "engine/AppState.h"
#include <iostream>

MenuBehavior::MenuBehavior()
{
    //ctor
}

MenuBehavior::~MenuBehavior()
{
    //dtor
}

void MenuBehavior::update()
{
    App::getInstance()->getWindow().clear(sf::Color(180,180,180,255));

    sf::Event event;
    while (App::getInstance()->getWindow().pollEvent(event))
    {
        if (event.type == sf::Event::MouseButtonPressed)
        {
            App::getInstance()->getAppStateManager().setActiveAppState(AppState::Classic);
        }

        if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
        {
            App::getInstance()->getWindow().close();
        }
    }
}
