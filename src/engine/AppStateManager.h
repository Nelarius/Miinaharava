#ifndef APPSTATEMANAGER_H
#define APPSTATEMANAGER_H

#include "engine/AppState.h"   //mandatory for derived classes...
#include "game/AppStateSplashScreen.h"
#include "game/AppStateMenu.h"
#include <game/AppStateClassic.h>

class AppStateManager
{
    public:
        AppStateManager();
        ~AppStateManager();

        void setActiveAppState(int id);

    private:
        AppState* _activeAppState;

        AppStateSplashScreen   _splashScreen;
        AppStateMenu           _menu;
        AppStateClassic        _classic;
};

#endif // APPSTATEMANAGER_H
