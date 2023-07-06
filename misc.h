#ifndef MISC_H
#define MISC_H

#include <string>

#include "ip.h"

std::vector<std::string> split(const std::string &str, char d);

void print_pool(const std::vector<unsigned>& pool);

#endif // MISC_H
