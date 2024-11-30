#include "game.hpp"
#include <iostream>

int main() {
    std::cout << "Welcome to Tic-Tac-Toe!\n";
    std::cout << "Instructions:\n";
    std::cout << "1. The game is played on a 3x3 grid.\n";
    std::cout << "2. Players take turns placing their marker (X or O) in an empty slot.\n";
    std::cout << "3. To win, a player must align 3 of their markers in a row, column, or diagonal.\n";
    std::cout << "4. Enter a number between 1 and 9 to place your marker in the corresponding slot.\n";
    std::cout << "   The slots are numbered as follows:\n";
    std::cout << "    1 | 2 | 3\n";
    std::cout << "   ---|---|---\n";
    std::cout << "    4 | 5 | 6\n";
    std::cout << "   ---|---|---\n";
    std::cout << "    7 | 8 | 9\n";
    std::cout << "5. The game ends when one player wins or the board is full.\n\n";

    Game game;
    game.Start();

    std::cout << "Thank you for playing Tic-Tac-Toe!\n";
    return 0;
}
