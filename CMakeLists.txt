cmake_minimum_required (VERSION 2.8)

#g++  test.cc -lgtest -lpthread -std=c++11

file(GLOB SOURCES *.cpp)

project (gtest_demo)
set(CMAKE_CXX_STANDARD 11) #等同于SET(CMAKE_CXX_FLAGS "-std=c++11")
message(STATUS "C++11 support has been enabled by default.")

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

link_libraries(-lgtest -lpthread)
add_executable(gtest_demo ${SOURCES})



