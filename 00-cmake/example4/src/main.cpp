#include "config.h"
#include "lib.h"

#include <iostream>

int main()
{
    std::cout << "Hello from main!" << std::endl;

    lib::hello();
    std::cout << "Lib version: " << lib::version() << std::endl;

    std::cout << "Main version: " << (PROJECT_VERSION) << std::endl;

    return 0;
}