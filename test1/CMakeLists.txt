# 指令是大小写无关的，用大写或小写都可以的
# 指定 CMake 的最低版本要求为3.0
cmake_minimum_required(VERSION 3.0)

# 指定项目的工程名
project(SWAP)

# 指定头文件搜索目录，与 g++ 中的 -Iinclude 命令是等价的
include_directories(include)

# 生成可执行文件，参数：生成的文件名 source1 source2 ... sourceN
add_executable(main_cmake main.cpp src/swap.cpp)