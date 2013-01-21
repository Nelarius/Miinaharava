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
    return _entityBehavior;
}

Drawable* Entity::getDrawable() const
{
    return _entityDrawable;
}
