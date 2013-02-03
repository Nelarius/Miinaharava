#include "AppStateMenu.h"
#include "engine/App.h"    //for window reference
#include "game/MenuStateEntity.h"
#include <iostream>

AppStateMenu::AppStateMenu()
{
    //ctor
}

AppStateMenu::~AppStateMenu()
{
    //dtor
}

void AppStateMenu::activate()
{
    App::getInstance()->getEntityManager().add(2u, new MenuStateEntity());
    App::getInstance()->getWindow().clear(sf::Color::Black);
}

void AppStateMenu::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
}
