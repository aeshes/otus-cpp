#ifndef IP_H
#define IP_H

#include <cstdint>
#include <string>
#include <array>
#include <vector>
#include <iostream>

using ip = unsigned int;

ip make_ip(const std::vector<std::string>& splitted);

void print_ip(const ip& ip);

#endif // IP_H
