#include <iostream>
#include "board.h"
#include "player.h"

int main()
{
    int turn = 0;

    Player firstPlayer('X');
    Player secondPlayer('O');

    Board board;

    while (true)
    {
        Player& currentPlayer = turn == 0 ? firstPlayer : secondPlayer;

        board.printBoard();
        std::cout << "new turn\n";

        const int playerInput = currentPlayer.getMove();
        const int row = playerInput / 3;
        const int col = playerInput % 3;

        std::cout << "player move is " << row << " " << col << "\n";

        board.setCell(row, col, currentPlayer.getSymbol());

        if (board.checkWin(currentPlayer))
        {
            std::cout << currentPlayer.getSymbol() << " wins\n";

            return 0;
        }
        else
        {
            turn = turn == 0 ? 1 : 0;
        }
    }

    return 0;
}
