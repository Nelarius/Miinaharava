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
    if (!App::getInstance()->getEntityManager().add(2u, new MenuStateEntity()))
    {
        std::cout << "entity not added" << std::endl;
    }
}

void AppStateMenu::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
}
