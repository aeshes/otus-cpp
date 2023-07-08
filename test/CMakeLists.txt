cmake_minimum_required(VERSION 3.12)

project(test VERSION ${PROJECT_VERSION})

if (WITH_BOOST_TEST)
	find_package(Boost COMPONENTS unit_test_framework REQUIRED)
	add_executable(test_version test_version.cpp)

	set_target_properties(test_version PROPERTIES
		CXX_STANDARD 14
		CXX_STANDARD_REQUIRED ON
	)

	set_target_properties(test_version PROPERTIES
		COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
		INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
	)

	target_include_directories(test_version
		PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../src/lib
	)

	target_link_libraries(test_version
		${Boost_LIBRARIES}
		version
	)

	enable_testing()
	add_test(test_version test_version)
endif()
