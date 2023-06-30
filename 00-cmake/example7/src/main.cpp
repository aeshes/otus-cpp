#include "config.h"
#include "sumlib.h"

#include <iostream>

int main()
{
    std::cout << "Hello from main!" << std::endl;
    sumlib::sum(1, 3);

    std::cout << "Lib version: " << sumlib::version() << std::endl;
    std::cout << "Main version: " << (PROJECT_VERSION) << std::endl;

    return 0;
}