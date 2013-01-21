#include "game/GridEntity.h"
#include "game/GridBehavior.h"

GridEntity::GridEntity()
{
    _entityBehavior = new GridBehavior();
    _entityDrawable = 0;
}


GridEntity::~GridEntity()
{
    delete _entityBehavior;
}
