#ifndef BOARD_H
#define BOARD_H


class Board{
private:
	char boardMatrix[3][3];

public:
	Board();

	void initializeCell(int row, int col);
	char getCell(int row, int col) const;

	void makeMove(int row, int col, char symbol);

	friend std::ostream& operator<<(std::ostream& out, const Board& board);
};


#endif