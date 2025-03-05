//
// Created by Nino Keravel on 19/02/2025.
//

#ifndef MOVE_HPP
#define MOVE_HPP

class Move;

#include "position.hpp"
#include "../board/board.hpp"
#include "../piece/piece.hpp"

class Move {
    private:
        Position start;
        Position end;
        Board* board;
    public:
        Move(Board* board, const Position& start, const Position& end) 
            : board(board), start(start), end(end) {}
        
        Position getStart() const {
            return start;
        }
        
        Position getEnd() const {
            return end;
        }

        Piece* getPieceAtStart() const;
};

#endif //MOVE_HPP
