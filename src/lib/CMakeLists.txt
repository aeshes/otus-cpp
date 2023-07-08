cmake_minimum_required(VERSION 3.12)

project(version VERSION ${PROJECT_VERSION})

configure_file(version.h.in ${CMAKE_BINARY_DIR}/version.h)

add_library(version lib.cpp)

set_target_properties(version PROPERTIES
	CXX_STANDARD 14
	CXX_STANDARD_REQUIRED ON
)

target_include_directories(version PRIVATE ${CMAKE_BINARY_DIR})
