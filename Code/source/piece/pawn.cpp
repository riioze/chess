#include "pawn.hpp"

std::vector<Move> Pawn::getValidMoves(){
    auto moves = std::vector<Move>();

    checkForward(moves);

    return moves;
}

void Pawn::checkForward(std::vector<Move>& moves){
    Position new_pos = {0,0};
    if (isWhite){
        if (position.getY() < 7){
            new_pos = Position(position.getX(), position.getY() + 1);
        } else {
            return;
        }
    } else {
        if (position.getY() > 0){
            new_pos = Position(position.getX(), position.getY() - 1);
        } else {
            return;
        }
    }

    if (board->isEmpty(new_pos)){
        moves.push_back(Move(board, position, new_pos));
        check2Forward(moves, new_pos); // Check two places forward if the first move is successful
    }
}

void Pawn::check2Forward(std::vector<Move>& moves, const Position& one_step_forward){
    Position new_pos = {0,0};
    if (isWhite){
        if (one_step_forward.getY() < 7 && position.getY() == 1){ // Check if the pawn is in its initial position
            new_pos = Position(one_step_forward.getX(), one_step_forward.getY() + 1);
        } else {
            return;
        }
    } else {
        if (one_step_forward.getY() > 0 && position.getY() == 6){ // Check if the pawn is in its initial position
            new_pos = Position(one_step_forward.getX(), one_step_forward.getY() - 1);
        } else {
            return;
        }
    }

    if (board->isEmpty(new_pos)){
        moves.push_back(Move(board, position, new_pos));
    }
}
