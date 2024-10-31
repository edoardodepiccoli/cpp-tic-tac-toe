#include <iostream>
#include <array>

#include "player.h"

Player::Player(char symbol) : symbol(symbol) {
	std::cout << "initialized player " << symbol << "\n";
}

char Player::getSymbol() const{
	return symbol;
}

int Player::getMove() const{
	char row;

	std::cout << "Player " << getSymbol() << ", please enter your move" << "\n" << "just enter the row and col separated by a space: ";
	std::cin >> row;
	std::cout << "\n";

	return row - '0';
}

std::ostream& operator<<(std::ostream& out, const Player& player){
	out << "Player " << player.getSymbol();
	return out;
}