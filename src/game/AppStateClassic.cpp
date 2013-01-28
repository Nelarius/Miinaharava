#include "AppStateClassic.h"

#include "engine/App.h"
#include "game/GridEntity.h"
#include <iostream>

AppStateClassic::AppStateClassic()
{
    //ctor
}

AppStateClassic::~AppStateClassic()
{
    //dtor
}

void AppStateClassic::activate()
{
    ///note! if the newly created grid entity creates a bunch of new entities within its constructor, this entity will not be available for 3u!
    GridEntity* grid = new GridEntity();
    unsigned int highest = App::getInstance()->getEntityManager().getHighestAvailableIdent();
    App::getInstance()->getEntityManager().add(highest, grid);
}

void AppStateClassic::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
}
