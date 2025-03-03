//
// Created by Nino Keravel on 19/02/2025.
//

#ifndef MOVE_HPP
#define MOVE_HPP

class Move {
  public:
    int startX, startY, endX, endY;
  Move(int startX, int startY, int endX, int endY) : startX(startX), startY(startY), endX(endX), endY(endY) {}
};

#endif //MOVE_HPP
