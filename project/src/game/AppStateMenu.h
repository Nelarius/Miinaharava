#ifndef APPSTATEMENU_H
#define APPSTATEMENU_H

#include "engine/AppState.h"

class AppStateMenu : public AppState
{
    public:
        AppStateMenu();
        virtual ~AppStateMenu();

        void activate();
        void deactivate();
    protected:
    private:
};

#endif // APPSTATEMENU_H
