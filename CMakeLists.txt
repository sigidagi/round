cmake_minimum_required(VERSION 2.6)

project(roundtest)

set(CMAKE_CXX_FLAGS "-g --std=c++11 ")

include_directories(
    ${CMAKE_SOURCE_DIR}/src
    )

link_directories(${CMAKE_BINARY_DIR}/lib)

set(ROUND_SOURCE
    src/main.cpp
)

add_executable(${PROJECT_NAME}  ${ROUND_SOURCE})

set(CMAKE_INSTALL_PREFIX "/usr")

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)
