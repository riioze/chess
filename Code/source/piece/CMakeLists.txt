add_library(piece STATIC piece.cpp piece.hpp)

# Include headers
target_include_directories(piece PUBLIC ${CMAKE_SOURCE_DIR}/include)