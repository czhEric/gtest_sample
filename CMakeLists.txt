cmake_minimum_required (VERSION 2.8)

# 项目信息
project (gtest_demo)

SET(GTEST_DIR googletest)

# set(CMAKE_CXX_STANDARD 11)  #等同于SET(CMAKE_CXX_FLAGS "-std=c++11")
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# message(STATUS "C++11 support has been enabled by default.")

#将googletset添加到总项目的编译列表中
add_subdirectory(${GTEST_DIR})

# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
#aux_source_directory(. DIR_SRCS)

#FILE(GLOB_RECURSE)：将test文件夹以及子文件夹下所有的编码文件（*.h，*.cpp）组成一个列表，并存储在变量TEST_SRC中，后续便可以使用${TEST_SRC}代表这些文件；
FILE(GLOB_RECURSE TEST_SRC "${CMAKE_SOURCE_DIR}/*.cpp" "${CMAKE_SOURCE_DIR}/*.h")

#add_executable：使用${TEST_SRC}存储的文件为项目构建一个可执行文件，一般默认文件名与项目名相同，比如ProjectTest.exe；
add_executable(${PROJECT_NAME} ${TEST_SRC})

#target_link_libraries：为项目文件链接其所需的库文件，比如gtest库，还有项目开发代码的库文件
target_link_libraries(${PROJECT_NAME} gtest)

# 指定生成目标
add_executable(Demo ${TEST_SRC})

