cmake_minimum_required(VERSION 3.14)
project(app)
set(CMAKE_BUILD_TYPE "Debug")

add_subdirectory(static_lib) # 触发子目录的构建
add_subdirectory(main)