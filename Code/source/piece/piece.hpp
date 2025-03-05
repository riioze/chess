//
// Created by Nino Keravel on 19/02/2025.
//

#include "../move/move.hpp"
#include "../board/board.hpp"

#include <vector>
#ifndef PIECE_H
#define PIECE_H

class Piece {
    public:
    char symbol;
    bool isWhite;
    Board board;
    int x, y;
    Piece(bool isWhite, Board board, int x, int y) : isWhite(isWhite), board(board), x(x), y(y) {}
    virtual ~Piece() = default;
    virtual std::vector<Move> getValidMoves() = 0;
};

#endif //PIECE_H
