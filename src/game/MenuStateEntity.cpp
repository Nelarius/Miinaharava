#include "game/MenuStateEntity.h"

#include <game/MenuBehavior.h>
#include <game/MenuDrawable.h>

MenuStateEntity::MenuStateEntity()
{
    _entityBehavior = new MenuBehavior();
    _entityDrawable = new MenuDrawable();
}

MenuStateEntity::~MenuStateEntity()
{
    delete _entityBehavior;
    delete _entityDrawable;
}
