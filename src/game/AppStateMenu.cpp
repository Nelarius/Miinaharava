#include <game/AppStateMenu.h>
#include <engine/App.h>    //for window reference
#include <game/MenuGUIEntity.h>
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
    MenuGUIEntity* gui = new MenuGUIEntity();
    unsigned int index = App::getInstance()->getEntityManager().getHighestAvailableIdent();
    App::getInstance()->getEntityManager().add(index, gui);
}

void AppStateMenu::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
}
