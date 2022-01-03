# 制作静态库
add_library(static_lib STATIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/static_lib.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/static_sub/static_sub.c
)
# 对外暴露api
target_include_directories(static_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)