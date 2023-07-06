cmake_minimum_required(VERSION 3.5)

project(ip-filter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ip-filter ip.h misc.h ip_filter.cpp ip.cpp misc.cpp)

install(TARGETS ip-filter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
