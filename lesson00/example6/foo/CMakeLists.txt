cmake_minimum_required(VERSION 3.5)

project(foo)

set(HEADERS foo.h)
set(SOURCES foo.cpp)

add_library(foo STATIC ${SOURCES} ${HEADERS})
