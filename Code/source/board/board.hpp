//
// Created by Nino Keravel on 19/02/2025.
//
#pragma once
#include <vector>
#include "../piece/piece.hpp"
#include "../move/move.hpp"


#ifndef BOARD_HPP
#define BOARD_HPP

class Board {
    private:
    Piece* grid[8][8] = {};
    std::vector<Move> moveHistory;
    public:
    Board();
    bool isEmpty(int x, int y) const;
    Piece *getPiece(const int x, const int y) const {return grid[x][y];}
};

#endif //BOARD_HPP
