#include <iostream>
#include "board.h"

Board::Board(){
	for(int row = 0; row < 3; row++){
		for (int col = 0; col < 3; col++){
			setCell(row, col, '-');
		}
	}
}

void Board::printBoard() const {
	for(int row = 0; row < 3; row++){
		for (int col = 0; col < 3; col++){
			std::cout << getCell(row, col);
		}
		std::cout << "\n";
	}
}

char Board::getCell(int row, int col) const {
	return matrix[row][col];
}

void Board::setCell(int row, int col, char val){
	matrix[row][col] = val;
}

bool Board::onBoard(int row, int col) const {
	return row >= 0 && row <= 2 && col >= 0 && col <= 2;
}

bool Board::cellFree(int row, int col) const {
	return getCell(row, col) == '-';
}
