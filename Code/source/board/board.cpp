//
// Created by Nino Keravel on 19/02/2025.
//

#include "board.hpp"

Board::Board(){
    for (int x = 0; x < 8; x++) {
        *grid[x] = {};
        for (int y = 0; y < 8; y++) {
            grid[x][y] = nullptr;
        }
    }
}

bool Board::isEmpty(const int x, const int y) const {
    return grid[x][y] == nullptr;
}
