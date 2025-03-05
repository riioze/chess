#ifndef POSITION_HPP
#define POSITION_HPP

#include <iostream>

class Position {
    private:
        int x, y;
    public:
        Position(int x, int y) {
            if (!set(x, y)) {
                this->x = -1;
                this->y = -1;
            }
        }
        inline bool set(int x, int y) {
            if (0 <= x && x < 8 && 0 <= y && y < 8) {
                this->x = x;
                this->y = y;
                return true;
            }
            std::cerr << "Invalid position: (" << x << ", " << y << ")" << std::endl;
            return false;
        }
        inline bool set(const Position& pos) {
            return set(pos.getX(), pos.getY());
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
};

#endif // POSITION_HPP