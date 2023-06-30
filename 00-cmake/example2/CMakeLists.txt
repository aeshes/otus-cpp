cmake_minimum_required(VERSION 3.5)

set(HEADERS version.h)
set(SOURCES main.cpp version.cpp)

add_executable(version ${HEADERS} ${SOURCES})
set_target_properties(
    version PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)