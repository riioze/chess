//
// Created by Nino Keravel on 19/02/2025.
//

#ifndef BOARD_HPP
#define BOARD_HPP

class Board;

#include "../piece/piece.hpp"
#include "../../include/position.hpp"
#include <vector>

class Move;

class Board {
    private:
    Piece* grid[8][8] = {};
    std::vector<Move> moveHistory;
    public:
    Board();
    bool isEmpty(const Position& pos) const;
    Piece *getPiece(const Position& pos) const;
};

#endif //BOARD_HPP
