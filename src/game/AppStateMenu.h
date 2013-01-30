#ifndef APPSTATEMENU_H
#define APPSTATEMENU_H

#include <engine/AppState.h>

class AppStateMenu : public AppState
{
    public:
        AppStateMenu();
        ~AppStateMenu();

        void activate();
        void deactivate();

    private:
};

#endif // APPSTATEMENU_H
