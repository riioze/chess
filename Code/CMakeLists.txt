cmake_minimum_required(VERSION 3.30)
project(chess)

set(CMAKE_CXX_STANDARD 23)


# source dirs
add_subdirectory(source)
add_subdirectory(include)

file(GLOB SOURCES source/*.cpp)
file(GLOB HEADERS include/*.h)

add_executable(chess ${SOURCES} ${HEADERS})

# link
target_link_libraries(chess ${SDL3_LIBRARIES})
