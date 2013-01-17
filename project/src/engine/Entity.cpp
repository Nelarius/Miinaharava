#include "engine/Entity.h"

Entity::Entity()
{
    //ctor
}

Entity::~Entity()
{
    //dtor
}

Behavior* Entity::getBehavior() const
{
    return &_entityBehavior;
}

Behavior* Entity::getDrawable() const
{
    return &_entityDrawable;
}
