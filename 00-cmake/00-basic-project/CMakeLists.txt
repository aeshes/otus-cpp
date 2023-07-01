cmake_minimum_required(VERSION 3.5)

project(HelloWorld VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(
    config.h.in
    ${PROJECT_BINARY_DIR}/config.h
)

add_executable(helloworld main.cpp)

target_include_directories(
    helloworld PUBLIC
    ${PROJECT_BINARY_DIR}
)