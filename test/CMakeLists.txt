cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD 14)
set(CXX_STANDARD_REQUIRED ON)

project(test)

enable_testing()

find_package(GTest REQUIRED)

file(GLOB sources ${CMAKE_CURRENT_SOURCES_DIR}/../*.cpp)

add_executable(test test.cpp ${sources})

target_include_directories(test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)

target_link_libraries(test GTest::GTest GTest::Main ip)

add_test(unittest test)
