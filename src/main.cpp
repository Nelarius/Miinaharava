#include "engine/App.h"
#include "UnitTest++.h"

#include <iostream>

int main(int argc, char** argv)
{
    //before running the app, run the tests:
    int result = UnitTest::RunAllTests();

    std::cout << std::endl;

    App* app = App::getInstance();
    app->execute();

    return result;
}
