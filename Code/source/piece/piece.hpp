//
// Created by Nino Keravel on 19/02/2025.
//


#include "../move/move.hpp"
#include "../board/board.hpp"
#ifndef PIECE_H
#define PIECE_H


class Piece {
    public:
    char symbol;
    bool isWhite;
    Piece(char symbol, bool isWhite);
    virtual ~Piece() = default;
    virtual bool isValidMove(const Move& move, const Board& board) = 0;
};

#endif //PIECE_H
