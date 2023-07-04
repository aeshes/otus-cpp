cmake_minimum_required(VERSION 3.5)

project(unit-testing)

add_executable(
    demo
    src/main.cpp
)

add_executable(
    test
    test/test_version.cpp
)

find_package(GTest)

target_include_directories(test PRIVATE src)
target_include_directories(test PRIVATE ${GTEST_INCLUDE_DIRS})
target_link_libraries(test PRIVATE ${GTEST_BOTH_LIBRARIES})

if (MSVC)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    target_compile_options(
        demo PRIVATE
        /W4
    )

    target_compile_options(
        test PRIVATE
        /W4
    )
endif()
