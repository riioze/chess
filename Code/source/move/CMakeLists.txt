add_library(move STATIC move.cpp move.hpp)

# Include headers
target_include_directories(move PUBLIC ${CMAKE_SOURCE_DIR}/include)