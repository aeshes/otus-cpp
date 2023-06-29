cmake_minimum_required(VERSION 3.5)

project(example3 VERSION 0.0.1)

configure_file(
    config.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

set(HEADERS version.h config.h)
set(SOURCES main.cpp version.cpp)

add_executable(configure ${SOURCES} ${HEADERS})
set_target_properties(
    configure PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)
target_include_directories(
    configure
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)