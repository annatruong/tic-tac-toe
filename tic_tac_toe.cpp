#include <iostream>
#include <vector>
#include "tic_tac_toe_fn.hpp"

int main()
{
    // Print instructions
    std::cout << "                                                                                                                                                \n";
    std::cout << "________________________________________________________________________________________________________________________________________________\n";
    std::cout << "________________________________________________________________________________________________________________________________________________\n";
    std::cout << "                                                                                                                                                \n";
    std::cout << "     OOOOOOOOOOOOOO  XXXX      OOOOOOOOO      XXXXXXXXXXXXXX   OOOOOOOOOO      XXXXXXXXX      OOOOOOOOOOOOOO     XXXXXXXXX     OOOOOOOOOOOO     \n";
    std::cout << "     OOOOOOOOOOOOOO  XXXX    OOOOOOOOOOOOO    XXXXXXXXXXXXXX  OOOOOOOOOOOO   XXXXXXXXXXXXX    OOOOOOOOOOOOOO   XXXXXXXXXXXXX   OOOOOOOOOOOO     \n";
    std::cout << "          OOOO       XXXX   OOOOO                  XXXX       OOOO    OOOO  XXXXX                  OOOO       XXXXX     XXXXX  OOOO             \n";
    std::cout << "          OOOO       XXXX   OOOOO                  XXXX       OOOOOOOOOOOO  XXXXX                  OOOO       XXXXX     XXXXX  OOOOOOOOOOOO     \n";
    std::cout << "          OOOO       XXXX   OOOOO                  XXXX       OOOOOOOOOOOO  XXXXX                  OOOO       XXXXX     XXXXX  OOOO             \n";
    std::cout << "          OOOO       XXXX    OOOOOOOOOOOOO         XXXX       OOOO    OOOO   XXXXXXXXXXXXX         OOOO        XXXXXXXXXXXXX   OOOOOOOOOOOO     \n";
    std::cout << "          OOOO       XXXX      OOOOOOOOO           XXXX       OOOO    OOOO     XXXXXXXXX           OOOO          XXXXXXXXX     OOOOOOOOOOOO     \n";
    std::cout << "                                                                                                                                                \n";
    std::cout << "________________________________________________________________________________________________________________________________________________\n";
    std::cout << "________________________________________________________________________________________________________________________________________________\n";
    std::cout << "                                                                                                                                                \n";    
    std::cout << "- Player 1 is represented by Os and Player 2 is represented by Xs.\n";
    std::cout << "- Players take turns putting their marks in empty squares.\n";
    std::cout << "- The first player to get 3 marks in a row (up, down, across, or diagonally) is the winner.\n\n";
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