cmake_minimum_required(VERSION 3.16)
project(GTest_Test_Framework VERSION 1.0 DESCRIPTION "Testing Google Test Framework" LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

list(APPEND MODULES Module1)

foreach(modules ${MODULES})
	add_subdirectory(${modules})
endforeach()


include_directories(
	${CMAKE_SOURCE_DIR}/GTestBuild/include
)

find_package(Threads REQUIRED)

find_library(GTEST_BUILD NAMES gtest gtest_main PATHS ${CMAKE_SOURCE_DIR}/GTestBuild/lib)


add_executable(GTest_Test main.cpp)


target_link_libraries(GTest_Test ${MODULES} ${GTEST_BUILD} Threads::Threads)



