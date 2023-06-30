#include "sumlib.h"
#include "config.h"

#include <iostream>

namespace sumlib
{
    int sum(int a, int b)
    {
        std::cout << "Hello from lib!" << std::endl;

        return a + b;
    }

    int version()
    {
        return (PROJECT_VERSION);
    }
}