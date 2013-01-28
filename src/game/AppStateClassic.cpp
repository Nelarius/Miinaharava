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
    if (!App::getInstance()->getEntityManager().add(3u, new GridEntity()))
    {
        std::cout << "entity not added." << std::endl;
    }
}

void AppStateClassic::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
}
