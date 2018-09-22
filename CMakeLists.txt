cmake_minimum_required(VERSION 2.6)

project(roundas)

add_definitions(-D_GLIBCXX_USE_C99)

set(CMAKE_CXX_FLAGS "-g --std=c++11 ")

include_directories(
    ${CMAKE_SOURCE_DIR}/src
    )

link_directories(${CMAKE_BINARY_DIR}/lib)

set(ROUND_SOURCE
    src/main.cpp
)

add_executable(${PROJECT_NAME}  ${ROUND_SOURCE})
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
