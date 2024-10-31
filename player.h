#ifndef PLAYER_H
#define PLAYER_H


class Player{
private:
	char symbol;

public:
	Player(char symbol);

	char getSymbol() const;
	int getMove() const;
	
	friend std::ostream& operator<<(std::ostream& out, const Player& player);
};


#endif