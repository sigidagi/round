cmake_minimum_required(VERSION 3.7)

project(round)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

find_package(Rust REQUIRED)

enable_language(Rust)
include(CMakeCargo)

set(CMAKE_CXX_FLAGS "-g --std=c++11 ")
message("CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")

add_subdirectory(cpp)
add_subdirectory(rs)

