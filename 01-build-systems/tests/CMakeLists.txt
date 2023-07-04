cmake_minimum_required(VERSION 3.5)

project(helloworld-tests)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(test gtest_version.cpp)

target_include_directories(test PRIVATE ${GTEST_INCLUDE_DIRS})
target_include_directories(test PRIVATE ../lib)
target_link_libraries(
    test PRIVATE 
    ${GTEST_BOTH_LIBRARIES}
    version
)

