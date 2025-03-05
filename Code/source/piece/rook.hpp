//
// Created by Nino on 03/03/2025.
//

#include "piece.hpp"

#ifndef ROOK_HPP
#define ROOK_HPP


class Rook : Piece {
	public:
		Rook(bool isWhite) : Piece('R', isWhite) {}
		bool isValidMove(const Move& move, const Board& board);
};



#endif //ROOK_HPP
