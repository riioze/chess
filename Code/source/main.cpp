#include <iostream>

#include "piece/piece.hpp"
#include "move/move.hpp"
#include "board/board.hpp"

int main() {
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}
