cmake_minimum_required(VERSION 3.9)
project (main_app)
set(CMAKE_CXX_STANDARD 11)

add_executable(main main.c)
target_link_libraries(main dynamic_lib) # 动态链接dynamic_lib