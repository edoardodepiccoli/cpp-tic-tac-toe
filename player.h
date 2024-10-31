#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player
{
private:
    char symbol;

public:
    Player(char sym);

    char getSymbol() const;
    int getMove() const;
};

#endif
