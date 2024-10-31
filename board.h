#ifndef BOARD_H
#define BOARD_H

#include <iostream>

#include "player.h"

class Board
{
private:
    int matrix[3][3];

public:
    Board();

    void printBoard() const;

    char getCell(int row, int col) const;
    void setCell(int row, int col, char val);

    static bool onBoard(int row, int col);
    bool cellFree(int row, int col) const;
    bool checkWin(const Player& player) const;
};

#endif
