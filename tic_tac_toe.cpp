#include <iostream>
#include <vector>
#include "tic_tac_toe_fn.hpp"

int main()
{
    // Initialize the grid
    std::vector<std::vector<std::string>> grid(3, std::vector<std::string>(3, " "));

    bool gameover = false;
    bool draw = false;
    int player  = 1;

    while (!gameover) {
        grid = getNextMove(player, grid);
        printGrid(grid);
        gameover = findWinner(grid);
        draw = checkDraw(grid);
        if(gameover || draw) break;

        // swap players
        if(player == 1) player = 2;
        else player = 1;
    }

    if(gameover) std::cout << "Player " << player << " Wins!\n";
    else std::cout << "This was a draw!\n";
}