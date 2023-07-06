#include "ip.h"
#include "misc.h"

#include <stdexcept>
#include <string>
#include <iostream>
#include <algorithm>

void validate_ip(const std::vector<std::string>& splitted)
{
    if (splitted.size() != 4)
    {
        throw std::invalid_argument("IP must consists of 4 parts.");
    }

    for (const auto& part : splitted)
    {
        int p = std::stoi(part);

        if (p < 0 || p > 255)
        {
            throw std::invalid_argument("IP parts must be from 0 to 255.");
        }
    }
}

ip make_ip(const std::vector<std::string>& splitted)
{
    validate_ip(splitted);

    unsigned int _3 = std::stoi(splitted[0]);
    unsigned int _2 = std::stoi(splitted[1]);
    unsigned int _1 = std::stoi(splitted[2]);
    unsigned int _0 = std::stoi(splitted[3]);

    return _3 << 24 | _2 << 16 | _1 << 8 | _0;
}

void print_ip(const ip& ip)
{
    std::cout << static_cast<unsigned int>((ip >> 24) & 0xFF) << '.'
              << static_cast<unsigned int>((ip >> 16) & 0xFF) << '.'
              << static_cast<unsigned int>((ip >>  8) & 0xFF) << '.'
              << static_cast<unsigned int>((ip >>  0) & 0xFF) << '\n';
}
