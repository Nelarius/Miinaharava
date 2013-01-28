#include "MenuStateEntity.h"

#include <game/MenuBehavior.h>

MenuStateEntity::MenuStateEntity()
{
    _entityBehavior = new MenuBehavior();
    _entityDrawable = 0;
}

MenuStateEntity::~MenuStateEntity()
{
    delete _entityBehavior;
}
