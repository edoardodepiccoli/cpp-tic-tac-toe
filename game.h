#ifndef GAME_H
#define GAME_H

#include "board.h"

class Game{
private:
	int turn;
	Board board;

public:
	Game();

	void play();
	void playRound();

	void switchTurn();

	void printBoard() const;
};

#endif