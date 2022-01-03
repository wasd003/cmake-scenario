cmake_minimum_required(VERSION 3.9)
project (main_app)
set(CMAKE_CXX_STANDARD 11)

add_executable(main main.c)

# 通过target_compile_definitions传
target_compile_definitions(main PRIVATE LOG_LEVEL=1) # 必须指定PRIVATE|PUBLIC|INTERFACE
target_compile_definitions(main PRIVATE MARCO)

# 通过add_definitions传
# add_definitions("-DLOG_LEVEL=2")
# add_definitions("-DMARCO")

# 通过target_compile_definitions传并在构建编译系统时动态指定
# set (log_level "0" CACHE STRING "log level")
# target_compile_definitions(main PRIVATE LOG_LEVEL=${log_level}) # 必须指定PRIVATE|PUBLIC|INTERFACE

# 通过add_definitions传并在构建编译系统时动态指定
# set (log_level "0" CACHE STRING "log level")
# add_definitions("-DLOG_LEVEL=${log_level}")