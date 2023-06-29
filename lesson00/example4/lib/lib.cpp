#include "lib.h"
#include "config.h"

#include <iostream>

namespace lib
{
    int hello()
    {
        std::cout << "Hello from lib!" << std::endl;
        return 42;
    }

    int version()
    {
        return (PROJECT_VERSION);
    }
}