//
// Created by Nino Keravel on 19/02/2025.
//

#include "move.hpp"

Piece* Move::getPieceAtStart() const {
    return board->getPiece(start.getX(), start.getY());
}