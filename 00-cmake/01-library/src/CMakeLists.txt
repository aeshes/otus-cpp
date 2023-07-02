cmake_minimum_required(VERSION 3.5)

project(main)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC hello)

target_include_directories(
    main PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/../lib"
)