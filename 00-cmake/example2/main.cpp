#include <iostream>

#include "version.h"

int main()
{
    std::cout << "Hello from the second project" << std::endl;
    std::cout << "Version: " << example::version() << std::endl;
}