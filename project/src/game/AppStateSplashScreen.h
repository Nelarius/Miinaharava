#ifndef APPSTATESPLASHSCREEN_H
#define APPSTATESPLASHSCREEN_H

#include "engine/AppState.h"

class AppStateSplashScreen : public AppState
{
    public:
        AppStateSplashScreen();
        ~AppStateSplashScreen();

        void activate();
        void deactivate();
    protected:
    private:
};

#endif // APPSTATESPLASHSCREEN_H
