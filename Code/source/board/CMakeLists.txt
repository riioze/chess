add_library(board STATIC board.cpp board.hpp)

# Include headers
target_include_directories(board PUBLIC ${CMAKE_SOURCE_DIR}/include)