//
// Created by Nino Keravel on 19/02/2025.
//

#ifndef PIECE_H
#define PIECE_H

class Piece;

#include "position.hpp"
#include "../board/board.hpp"
#include "../move/move.hpp"
#include <vector>

class Piece {
    public:
    char symbol;
    bool isWhite;
    Board *board;
    Position position;
    Piece(char symbol, bool isWhite, Board *board, const Position& position) 
        : symbol(symbol), isWhite(isWhite), board(board), position(position) {}
    virtual ~Piece() = default;
    virtual std::vector<Move> getValidMoves() = 0;
};

#endif //PIECE_H
