cmake_minimum_required(VERSION 3.8)

include(GoogleTest)

set(This ${CMAKE_PROJECT_NAME}_unit_tests)

file(GLOB_RECURSE Test_Sources List_Directories false *.h *.cpp)

add_executable(${This} ${Test_Sources})

target_link_libraries(${This} PUBLIC gtest_main)

gtest_discover_tests(${This})