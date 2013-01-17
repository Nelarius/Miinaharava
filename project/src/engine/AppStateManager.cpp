#include "AppStateManager.h"

AppStateManager::AppStateManager() : _activeAppState(0)
{
    //ctor
}

AppStateManager::~AppStateManager()
{
    //dtor
}

void AppStateManager::setActiveAppState(int id)
{
    if (_activeAppState)
    {
        _activeAppState->deactivate();
    }

    switch (id)
    {
        //
    }
}
