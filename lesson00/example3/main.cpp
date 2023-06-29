#include "version.h"

#include <iostream>

int main()
{
    std::cout << "Hello from main" << std::endl;
    std::cout << "Version: " << example::version() << std::endl;

    return 0;
}