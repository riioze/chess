//
// Created by Nino on 19/02/2025.
//

#include "pawn.hpp"

bool Pawn::isValidMove(const Move& move, const Board& board) {
	int direction = isWhite ? -1 : 1;
    int startY = move.startY;
    int startX = move.startX;
    int endY = move.endY;
    int endX = move.endX;

    // check for normal move
    if (startX == endX && startY == endY + direction) {
    	return board.isEmpty(endX, endY);
    }

	// Check for double move on first move
	if (startX == endX && endY == startY + 2 * direction && startY == (isWhite ? 6 : 1)) {
		return board.isEmpty(endX, endY) && board.isEmpty(endX, startY + direction); // Path must be clear
	}

	// Check for capture
	if (std::abs(startX - endX) == 1 && endY == startY + direction) {
		return !board.isEmpty(endX, endY) && board.getPiece(endX, endY)->isWhite != isWhite; // Capture opponent's piece
	}

    // TODO: en passant

    return false;
}