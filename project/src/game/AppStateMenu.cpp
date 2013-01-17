#include "AppStateMenu.h"
#include "App.h"    //for window reference

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
    App::getInstance()->getWindow().clear(sf::Color(255,255,255,255));
}

void AppStateMenu::deactivate()
{
    //
}
