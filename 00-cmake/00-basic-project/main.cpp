#include <iostream>

#include "config.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Version: " << HELLOWORLD_VERSION_MAJOR << "."
              << HELLOWORLD_VERSION_MINOR << std::endl;

    return 0;
}