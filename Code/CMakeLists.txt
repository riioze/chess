cmake_minimum_required(VERSION 3.30)
project(chess)

include(FetchContent)

set(CMAKE_CXX_STANDARD 23)

# find SLD3
find_package(SDL3 QUIET)

if (NOT SDL3_FOUND)
  FetchContent_Declare(SDL3
          GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
          GIT_TAG        release-3.2.0
          GIT_SHALLOW    TRUE
          GIT_PROGRESS   TRUE
  )
endif()


include_directories($(SDL3_INCLUDE_DIRS))

# source dirs
add_subdirectory(source)
add_subdirectory(include)

file(GLOB SOURCES source/*.cpp)
file(GLOB HEADERS include/*.h)

add_executable(chess ${SOURCES} ${HEADERS})

# link
target_link_libraries(chess ${SDL3_LIBRARIES})
