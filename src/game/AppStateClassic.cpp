#include "AppStateClassic.h"

#include "engine/App.h"
#include "game/GridEntity.h"
#include <game/Parameters.h>

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
    GridEntity* grid = new GridEntity();
    unsigned int highest = App::getInstance()->getEntityManager().getHighestAvailableIdent();
    App::getInstance()->getEntityManager().add(highest, grid);

    sf::View view;
    view.reset(sf::FloatRect(Parameters::TileSize(), Parameters::TileSize(), Parameters::ScreenWidth(), Parameters::ScreenHeight()));
    App::getInstance()->getWindow().setView(view);

    App::getInstance()->getWindow().clear(sf::Color::Black);
}

void AppStateClassic::deactivate()
{
    App::getInstance()->getEntityManager().removeAll();
    App::getInstance()->getWindow().setView(App::getInstance()->getWindow().getDefaultView());
}
