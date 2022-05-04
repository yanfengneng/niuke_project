# 指令是大小写无关的，用大写或小写都可以的
# 指定 CMake 的最低版本要求为3.0
cmake_minimum_required(VERSION 3.0)

# 指定项目的工程名
project(HelloWorld)

# 生成可执行文件 helloworld_cmake
add_executable(helloworld_cmake helloworld.cpp)