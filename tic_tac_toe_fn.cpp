#include <iostream>
#include <vector>

/** 
 * Gets player next move and places value in grid
 * */
std::vector<std::vector<std::string> > getNextMove(int player, std::vector<std::vector<std::string> > grid) {
    bool correct_input = false;
    int row, column;

    while(!correct_input) {
        // get player input
        std::cout << "Player " << player << ", please enter where you would like to place your next move (row column (1 - 3)): \n";
        std::cin >> row >> column;
        std::cout << "row: " << row << "\n";
        std::cout << "column: " << column << "\n";
        // check if player has entered current input
        if(row < 1 || row > 3 || column < 1 || column > 3) {
            std::cout << "Incorrect row/column value. Please enter a number between 1 - 3 inclusively.\n\n";
        } else {
            std::string current_value = grid[row - 1][column - 1];
            // check if position already taken
            if(current_value == "O" || current_value == "X") {
                std::cout << "Position taken. Please enter a different position.\n\n";
            } else {
                correct_input = true;
            }
        }

    }

    if (player == 1) {
        grid[row - 1][column - 1] = 'O';
    } else {
        grid[row - 1][column - 1] = 'X';
    }
    return grid;
}

/** 
 * Prints current grid
 * */
void printGrid(std::vector<std::vector<std::string> > grid) {
    std::cout << "\n\n";
    for (const auto& row : grid) {
        std::cout << " | ";
        for (const auto& column : row) {
            std::cout << column << " | ";
        }
         std::cout << "\n";
    }
    std::cout << "\n";
}