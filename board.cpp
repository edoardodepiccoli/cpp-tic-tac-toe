#include <iostream>

#include "board.h"

Board::Board(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			Board::initializeCell(i, j);
		}
	}

	std::cout << "board initialized\n";
}

void Board::initializeCell(int row, int col){
	boardMatrix[row][col] = '-';
}

char Board::getCell(int row, int col) const{
	return boardMatrix[row][col];
}

std::ostream& operator<<(std::ostream& out, const Board& board) {
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			out << board.getCell(i, j);
		}
		out << "\n";
	}

	return out;
}