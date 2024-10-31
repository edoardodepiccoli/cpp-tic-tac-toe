#include <iostream>

#include "game.h"
#include "player.h"

int main(){
	Game game;
	game.printBoard();

	Player player('X');
	player.getMove();

	return 0;
}