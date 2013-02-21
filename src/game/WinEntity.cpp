#include <game/WinEntity.h>
#include <game/WinDrawable.h>

WinEntity::WinEntity()
{
    _entityBehavior = 0;
    _entityDrawable = new WinDrawable();
}

WinEntity::~WinEntity()
{
    delete _entityDrawable;
}
