#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "misc.h"
#include "ip.h"

void sort_lexicographically(std::vector<unsigned>& pool)
{
    std::sort(pool.begin(), pool.end(), std::greater<unsigned int>());
}

int main(int argc, char const *argv[])
{
    try
    {
        std::vector<unsigned> pool;

        for(std::string line; std::getline(std::cin, line);)
        {
            std::vector<std::string> v = split(line, '\t');
            pool.push_back(make_ip(split(v.at(0), '.')));
        }

        // Сортируем в обратном лексикографическом порядке
        std::sort(pool.begin(), pool.end(), std::greater<unsigned int>());

        // Печатаем адреса в обратном лексикографическом порядке
        print_pool(pool);

        // Печатаем адреса, первый октет которых равен 1
        std::for_each(pool.cbegin(), pool.cend(), [](const int& ip) {
            if ((ip >> 24 & 0xFF) == 1)
                print_ip(ip);
        });

        // Печатаем адреса, первый октет которых равен 46, а второй 70
        std::for_each(pool.cbegin(), pool.cend(), [](const int& ip) {
            if ((ip >> 24 & 0xFF) == 46 && (ip >> 16 & 0xFF) == 70)
                print_ip(ip);
        });

        // Печатаем адреса, любой октет которых равен 46
        std::for_each(pool.cbegin(), pool.cend(), [](const int& ip) {
            if ((ip >> 24 & 0xFF) == 46 ||
                (ip >> 16 & 0xFF) == 46 ||
                (ip >>  8 & 0xFF) == 46 ||
                (ip >>  0 & 0xFF) == 46)
                print_ip(ip);
        });

        // TODO reverse lexicographically sort

        // 222.173.235.246
        // 222.130.177.64
        // 222.82.198.61
        // ...
        // 1.70.44.170
        // 1.29.168.152
        // 1.1.234.8

        // TODO filter by first byte and output
        // ip = filter(1)

        // 1.231.69.33
        // 1.87.203.225
        // 1.70.44.170
        // 1.29.168.152
        // 1.1.234.8

        // TODO filter by first and second bytes and output
        // ip = filter(46, 70)

        // 46.70.225.39
        // 46.70.147.26
        // 46.70.113.73
        // 46.70.29.76

        // TODO filter by any byte and output
        // ip = filter_any(46)

        // 186.204.34.46
        // 186.46.222.194
        // 185.46.87.231
        // 185.46.86.132
        // 185.46.86.131
        // 185.46.86.131
        // 185.46.86.22
        // 185.46.85.204
        // 185.46.85.78
        // 68.46.218.208
        // 46.251.197.23
        // 46.223.254.56
        // 46.223.254.56
        // 46.182.19.219
        // 46.161.63.66
        // 46.161.61.51
        // 46.161.60.92
        // 46.161.60.35
        // 46.161.58.202
        // 46.161.56.241
        // 46.161.56.203
        // 46.161.56.174
        // 46.161.56.106
        // 46.161.56.106
        // 46.101.163.119
        // 46.101.127.145
        // 46.70.225.39
        // 46.70.147.26
        // 46.70.113.73
        // 46.70.29.76
        // 46.55.46.98
        // 46.49.43.85
        // 39.46.86.85
        // 5.189.203.46
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
