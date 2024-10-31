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

void Board::printBoard() const
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << getCell(row, col);
        }
        std::cout << "\n";
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
        (matrix[0][0] == player.getSymbol() && matrix[1][1] == player.getSymbol() && matrix[2][2]) ||
        (matrix[0][2] == player.getSymbol() && matrix[1][1] == player.getSymbol() && matrix[2][0])
    )
    {
        return true;
    }

        return false;
}
