//
// Created by Nino on 03/03/2025.
//

#include "rook.hpp"

bool Rook::isValidMove(const Move& move, const Board& board) {

    // Exclude part where the movement is not linear
	if (move.startX != move.endX && move.startY != move.endY) return false;

    // Exclude the case where the eaten piece is one of their own
    if (board.getPiece(move.endX,move.endY)->isWhite == isWhite)

    if (move.startX < move.endX) { // Going left
        for (int x = move.startX; x < move.endX; x++){
            if (!board.isEmpty(move.endX,move.endY)){
                return false;
            }
        }
    }
}