#include "engine/App.h"
#include "UnitTest++.h"
//#include <config.h>

#include <iostream>

int main(int argc, char** argv)
{
    #ifdef DEBUG
    //before running the app, run the tests:
    UnitTest::RunAllTests();

    //std::cout << std::endl << "Version " << myproject_VERSION_MAJOR << "." << myproject_VERSION_MINOR << std::endl << std::endl;
    #endif // DEBUG

    App* app = App::getInstance();
    app->execute();

    return 0;
}
