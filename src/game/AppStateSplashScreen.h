#ifndef APPSTATESPLASHSCREEN_H
#define APPSTATESPLASHSCREEN_H

#include <engine/AppState.h>

/// \brief The SplashScreen AppState.
///
/// This class contains the code for starting & running the SplashsScreen, which is displayed for 0.9 seconds.
class AppStateSplashScreen : public AppState
{
    public:
        AppStateSplashScreen();
        ~AppStateSplashScreen();

        void activate();
        void deactivate();

    private:
};

#endif // APPSTATESPLASHSCREEN_H
