#include <iostream>
#include "player.h"
#include "board.h"

Player::Player(char sym) : symbol(sym)
{
}

char Player::getSymbol() const
{
    return symbol;
}

int Player::getMove() const
{
    std::cout << "Player " << symbol << ", please enter your move ('row col' - 1 to 3): ";

    char row, col;
    std::cin >> row >> col;

    return ((row - '0' - 1) * 3 + (col - '0' - 1));
}
