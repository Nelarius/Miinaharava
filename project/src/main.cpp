#include "SFML/System.hpp"

int main()
{
    sf::Clock Clock;
    while (Clock.getElapsedTime() < 5.f)
    {
        std::cout << Clock.getElapsedTime() << std::endl;
        sf::Sleep(0.5f);
    }

    return 0;
}
