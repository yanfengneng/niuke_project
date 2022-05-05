# 指定 cmake 最低版本
cmake_minimum_required(VERSION 3.0)

# 指定项目的名字
project(SOLIDERFIRE)

# 设置 g++ 编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

# 设置 debug 模式
set(CMAKE_BUILD_TYPE Debug)

# 指定头文件搜索目录
include_directories(include)

# 生成可执行文件
add_executable(cmake_main main.cpp src/Gun.cpp src/solider.cpp)