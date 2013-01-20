#include "AppStateMenu.h"
#include "engine/App.h"    //for window reference
#include "game/GridEntity.h"

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
    App::getInstance()->getEntityManager().add(2, new GridEntity());
}

void AppStateMenu::deactivate()
{
    App::getInstance()->getEntityManager().remove(2);
}
