cmake_minimum_required(VERSION 3.5)

project(cmake_demo)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(ext/jsoncpp)

add_executable(main src/main.cpp)

target_link_libraries(main jsoncpp gtest pthread)
