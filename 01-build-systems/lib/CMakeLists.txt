cmake_minimum_required(VERSION 3.5)

project(VersionLib VERSION 0.0.1)

configure_file(
    version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/version.h
)

add_library(version STATIC lib.cpp lib.h)
set_target_properties(
    version PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)
target_include_directories(
    version
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)