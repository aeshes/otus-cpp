cmake_minimum_required(VERSION 3.12)

project(helloworld VERSION ${PROJECT_VERSION})

add_executable(helloworld_cli main.cpp)

set_target_properties(helloworld_cli PROPERTIES
	CXX_STANDARD 14
	CXX_STANDARD_REQUIRED ON
)

add_subdirectory(lib)

target_include_directories(helloworld_cli PRIVATE lib)

target_link_libraries(helloworld_cli PRIVATE version)
