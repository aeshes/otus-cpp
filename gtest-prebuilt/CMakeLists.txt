cmake_minimum_required(VERSION 3.5)

project(unit-testing)

add_subdirectory(
    "${CMAKE_CURRENT_SOURCE_DIR}/googletest"
    "googletest"
)

add_executable(
    demo
    src/main.cpp
)

add_executable(
    test
    test/test_version.cpp
)

target_include_directories(
    test PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

target_link_libraries(
    test PRIVATE
    gtest gtest_main
)

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