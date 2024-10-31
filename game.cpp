//
// Created by Edoardo De Piccoli on 31/10/24.
//

#include "game.h"

Game::Game(): turn(0), playerX(Player('X')), playerO(Player('O')), board(Board())
{
}

void Game::start()
{
    std::cout << "welcome to the game!" << std::endl;
    playTurn();
    std::cout << "byee!" << std::endl;
}

void Game::playTurn()
{
    while (true)
    {
        Player& currentPlayer = turn == 0 ? playerX : playerO;

        board.printBoard();

        int playerInput = currentPlayer.getMove();
        int row = playerInput / 3;
        int col = playerInput % 3;

        while (board.cellFree(row, col) == false)
        {
            std::cout << "that cell is not free, please try again: " << std::endl;
            playerInput = currentPlayer.getMove();
            row = playerInput / 3;
            col = playerInput % 3;
        }

        board.setCell(row, col, currentPlayer.getSymbol());

        if (board.checkWin(currentPlayer))
        {
            board.printBoard();
            std::cout << currentPlayer.getSymbol() << " wins" << std::endl;

            break;
        }
        else
        {
            turn = turn == 0 ? 1 : 0;
        }
    }
}
