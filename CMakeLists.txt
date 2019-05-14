cmake_minimum_required (VERSION 2.8)

#g++  test.cc -lgtest -lpthread -std=c++11

project (gtest_demo)
set(CMAKE_CXX_STANDARD 11) #等同于SET(CMAKE_CXX_FLAGS "-std=c++11")
message(STATUS "C++11 support has been enabled by default.")

link_libraries(-lgtest -lpthread)
add_executable(gtest_demo test_env.cpp)



