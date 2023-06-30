cmake_minimum_required(VERSION 3.5)

project(hello_world)

set(SOURCES main.cpp)

include_directories(foo)

add_executable(main ${SOURCES})

add_subdirectory(foo)

target_link_libraries(main foo)