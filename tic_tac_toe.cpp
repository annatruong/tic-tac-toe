#include <iostream>
#include <vector>
#include "tic_tac_toe_fn.hpp"

int main()
{
    std::vector<std::vector<std::string> > grid;

    // Initialize the grid with empty strings
    for (int i = 0; i < 3; ++i)
    {
        grid.push_back(std::vector<std::string>(3, " "));
    }

    bool gameover = false;
    int player  = 1;
    while (!gameover) {
        grid = getNextMove(player, grid);
        printGrid(grid);
        if(player == 1) {
            player = 2;
        } else {
            player = 1;
        }
    }
}