#include "engine/AppStateManager.h"

AppStateManager::AppStateManager() : _activeAppState(0)
{

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
        case AppState::SplashScreen  :   _activeAppState = &_splashScreen;
                                         _activeAppState->activate();
                                         break;

        case AppState::Menu          :   _activeAppState = &_menu;
                                         _activeAppState->activate();
                                         break;
    }
}
