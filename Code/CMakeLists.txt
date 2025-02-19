cmake_minimum_required(VERSION 3.30)
project(chess)

set(CMAKE_CXX_STANDARD 23)

# find SLD3
set(SDL3_DIR "C:/SDL3/build")
find_package(SDL3 REQUIRED)

#
include_directories($(SDL3_INCLUDE_DIRS))

# source dir
add_subdirectory(source)

# link
target_link_libraries(chess ${SDL3_LIBRARIES})