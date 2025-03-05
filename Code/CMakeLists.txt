cmake_minimum_required(VERSION 3.30)
project(chess)

set(CMAKE_CXX_STANDARD 23)

# source dirs
add_subdirectory(source)
add_subdirectory(include)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES source/*.cpp)
file(GLOB HEADERS include/*.hpp)

add_executable(chess ${SOURCES} ${HEADERS})

# link
target_link_libraries(chess ${SDL3_LIBRARIES})
