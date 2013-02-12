#include <game/MenuGUIEntity.h>
#include <game/MenuGUIBehavior.h>

MenuGUIEntity::MenuGUIEntity()
{
    _entityBehavior = new MenuGUIBehavior();
    _entityDrawable = 0;
}

MenuGUIEntity::~MenuGUIEntity()
{
    delete _entityBehavior;
}
