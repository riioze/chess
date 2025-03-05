#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

class Pawn : public Piece {
public:
    Pawn(bool isWhite, Board *board, const Position& position) : Piece('P', isWhite, board, position) {}
    virtual ~Pawn() = default;
    std::vector<Move> getValidMoves();
};

#endif // PAWN_HPP