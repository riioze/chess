//
// Created by Nino Keravel on 19/02/2025.
//

#ifndef BOARD_HPP
#define BOARD_HPP

class Board;

#include "../piece/piece.hpp"
#include <vector>

class Move;

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
