cmake_minimum_required(VERSION 3.5)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})
set(CMAKE_BUILD_TYPE Debug)

project(HelloWorld VERSION ${PROJECT_VERSION})

message("Patch version: ", ${PATCH_VERSION})

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(tests)
