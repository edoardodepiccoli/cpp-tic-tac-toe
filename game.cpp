#include <iostream>

#include "game.h"

Game::Game() : turn(0) {
	std::cout << "game initialized\n";
}

void Game::play(){
	playRound();
}

void Game::playRound(){
}

void Game::switchTurn() {
	turn = turn == 0 ? 1 : 0;
	std::cout << "switched turn: " << turn << "\n";
}

void Game::printBoard() const {
	std::cout << board;
}