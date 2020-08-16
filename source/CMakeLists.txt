cmake_minimum_required(VERSION 3.8)

set(This ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE Sources List_Directories true *.hpp *.cpp)

add_library(${This}_lib STATIC ${Sources})