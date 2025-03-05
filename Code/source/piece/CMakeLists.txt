add_library(piece STATIC piece.cpp piece.hpp)
add_library(pawn STATIC pawn.cpp pawn.hpp)
add_library(rook STATIC rook.cpp rook.hpp)

# Include headers
target_include_directories(piece PUBLIC ${CMAKE_SOURCE_DIR}/include)