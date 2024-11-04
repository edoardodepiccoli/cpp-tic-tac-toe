#include <iostream>
#include "board.h"

#include "player.h"

Board::Board()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            setCell(row, col, '-');
        }
    }
}

void Board::printBoard() const {
    std::cout << "    1   2   3 " << std::endl; // Column numbers for reference
    for (int row = 0; row < 3; ++row) {
        std::cout << " " << (row + 1) << " "; // Row numbers for reference
        for (int col = 0; col < 3; ++col) {
            std::cout << " " << getCell(row, col) << " ";
            if (col < 2) std::cout << "|"; // Column separator
        }
        std::cout << std::endl;
        if (row < 2) std::cout << "   ---+---+---" << std::endl; // Row separator
    }
}


char Board::getCell(int row, int col) const
{
    return matrix[row][col];
}

void Board::setCell(int row, int col, char val)
{
    matrix[row][col] = val;
}

bool Board::onBoard(int row, int col)
{
    return row >= 0 && row <= 2 && col >= 0 && col <= 2;
}

bool Board::cellFree(int row, int col) const
{
    return getCell(row, col) == '-';
}

bool Board::checkWin(const Player& player) const
{
    for (int i = 0; i < 3; i++)
    {
        if (
            (matrix[i][0] == player.getSymbol() && matrix[i][1] == player.getSymbol() && matrix[i][2] == player.
                getSymbol()) ||
            (matrix[0][i] == player.getSymbol() && matrix[1][i] == player.getSymbol() && matrix[2][i] == player.
                getSymbol())
        )
        {
            return true;
        }
    }

    if (
        (matrix[0][0] == player.getSymbol() && matrix[1][1] == player.getSymbol() && matrix[2][2] == player.getSymbol()) ||
        (matrix[0][2] == player.getSymbol() && matrix[1][1] == player.getSymbol() && matrix[2][0] == player.getSymbol())
    )
    {
        return true;
    }

        return false;
}

bool Board::boardFull() const {
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            if (getCell(row, col) == '-') return false;
        }
    }

    return true;
}
