#include "engine/App.h"
#include "UnitTest++.h"

#include <iostream>

int main(int argc, char** argv)
{
    #ifdef DEBUG
    //before running the app, run the tests:
    UnitTest::RunAllTests();
    std::cout << std::endl;
    #endif // DEBUG

    App* app = App::getInstance();
    app->execute();

    return 0;
}
