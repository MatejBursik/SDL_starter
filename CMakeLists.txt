cmake_minimum_required(VERSION 3.29.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Test VERSION 1.0)

add_subdirectory(vendor)
add_subdirectory(src)
