cmake_minimum_required(VERSION 3.9)
project (main_app)
set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

# 相当于-I${HEADER_PATH}
target_include_directories(main PRIVATE /home/wasd003/gperf/include)
# 相当于-L${LIBRARY_PATH}
target_link_directories(main PRIVATE /home/wasd003/gperf/lib)
# 相当于-l${LIBRARY_NAME}
target_link_libraries(main profiler)
