cmake_minimum_required(VERSION 3.9)
project(dynamic_lib VERSION 1.0 DESCRIPTION "test making dynamic_lib")

# 制作动态库
add_library(dynamic_lib SHARED src/dynamic_lib.c)
# 对外暴露api
target_include_directories(dynamic_lib PUBLIC include)

# 以下用来安装动态库

# 引入后拥有GNU Standard CMAKE_INSTALL_xxDIR变量，比如CMAKE_INSTALL_LIBDIR
include(GNUInstallDirs)
# 设置动态库属性
set_target_properties(dynamic_lib PROPERTIES
    VERSION ${PROJECT_VERSION}
    PUBLIC_HEADER include/dynamic_lib.h)
# 配置安装路径，写相对路径就行，cmake会自动添加${CMAKE_INSTALL_PREFIX}前缀
install(TARGETS dynamic_lib 
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} # 安装动态库可执行文件
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}) # 安装头文件,PUBLIC_HEADER是之前声明的属性
