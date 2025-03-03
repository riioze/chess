//
// Created by riioz on 19/02/2025.
//

#include <math.h>
#include "piece.hpp"

#ifndef PAWN_HPP
#define PAWN_HPP

class Pawn : public Piece {
    public:
      explicit Pawn(bool isWhite) : Piece('P', isWhite) {};
      bool isValidMove(const Move& move, const Board& board) override;
};



#endif //PAWN_HPP
