//
// Created by Edoardo De Piccoli on 31/10/24.
//

#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "player.h"


class Game {
private:
    int turn;

    Player playerX;
    Player playerO;

    Board board;

public:
    Game();

    void start();
    void playTurn();
};



#endif //GAME_H
