cmake_minimum_required(VERSION 3.1.6)
set(CMAKE_CXX_STANDARD 20)
project(cmake-sfml VERSION 0.1.0)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(SFML 2.5.1 COMPONENTS system graphics audio network REQUIRED)

add_executable(cmake-sfml src/main.cpp)
include_directories(${CMAKE_SOURCE_DIR}/inc)
target_link_libraries(cmake-sfml PRIVATE sfml-audio sfml-graphics sfml-network sfml-system)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
