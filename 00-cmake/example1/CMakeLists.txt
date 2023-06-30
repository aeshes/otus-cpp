cmake_minimum_required(VERSION 3.5)

project(example1)

add_executable(hello main.cpp)
set_target_properties(
    hello PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)