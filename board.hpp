#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

class Board {
private:
    char grid[3][3];

public:
    Board();
    Board(const Board& other);
    Board& operator=(const Board& other);
    bool operator==(const Board& other) const;

    friend std::istream& operator>>(std::istream& in, Board& board);
    friend std::ostream& operator<<(std::ostream& out, const Board& board);

    void DrawBoard();
    bool PlaceMarker(int slot, char marker);
    int CheckWinner();
};

#endif
