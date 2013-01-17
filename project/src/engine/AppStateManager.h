#ifndef APPSTATEMANAGER_H
#define APPSTATEMANAGER_H

#include "AppState.h"   //mandatory for derived classes...

class AppStateManager
{
    public:
        AppStateManager();
        ~AppStateManager();

        void setActiveAppState(int id);

    private:
        AppState* _activeAppState;
};

#endif // APPSTATEMANAGER_H
