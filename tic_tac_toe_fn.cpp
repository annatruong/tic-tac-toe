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

        // check if player has entered correct input
        if(row < 1 || row > 3 || column < 1 || column > 3) {
            std::cout << "\nIncorrect row/column value. Please enter a number between 1 - 3 inclusively.\n\n";
        } else {
            std::string current_value = grid[row - 1][column - 1];
            // check if position already taken
            if(current_value == "O" || current_value == "X") std::cout << "Position taken. Please enter a different position.\n\n";
             else correct_input = true;
        }

    }

    // add move to grid
    if (player == 1) grid[row - 1][column - 1] = 'O';
    else grid[row - 1][column - 1] = 'X';

    return grid;
}


/** 
 * Check if there is a winner
 * */
bool findWinner(std::vector<std::vector<std::string> > grid) {
    if(
    (grid[0][0] == "O" && grid[0][1] == "O" && grid[0][2] == "O") || (grid[0][0] == "X" && grid[0][1] == "X" && grid[0][2] == "X") ||
    (grid[1][0] == "O" && grid[1][1] == "O" && grid[1][2] == "O") || (grid[1][0] == "X" && grid[1][1] == "X" && grid[1][2] == "X") ||
    (grid[2][0] == "O" && grid[2][1] == "O" && grid[2][2] == "O") || (grid[2][0] == "X" && grid[2][1] == "X" && grid[2][2] == "X") ||
    (grid[0][0] == "O" && grid[1][0] == "O" && grid[2][0] == "O") || (grid[0][0] == "X" && grid[1][0] == "X" && grid[2][0] == "X") ||
    (grid[0][1] == "O" && grid[1][1] == "O" && grid[2][1] == "O") || (grid[0][1] == "X" && grid[1][1] == "X" && grid[2][1] == "X") ||
    (grid[0][2] == "O" && grid[1][2] == "O" && grid[2][2] == "O") || (grid[0][2] == "X" && grid[1][2] == "X" && grid[2][2] == "X") ||
    (grid[0][0] == "O" && grid[1][1] == "O" && grid[2][2] == "O") || (grid[0][0] == "X" && grid[1][1] == "X" && grid[2][2] == "X") ||
    (grid[0][2] == "O" && grid[1][1] == "O" && grid[2][0] == "O") || (grid[0][2] == "X" && grid[1][1] == "X" && grid[2][0] == "X")
    ) {
        return true;
    }

    return false;
}

/** 
 * Check if grid is full
 * */
bool checkDraw(std::vector<std::vector<std::string> > grid) {

    for (const auto& row : grid) {
        for (const auto& value : row) {
            if(value == " ") return false;
        }
    }

    return true;
}

/** 
 * Prints current grid
 * */
void printGrid(std::vector<std::vector<std::string> > grid) {
    std::cout << "\n";
    for (const auto& row : grid) {
        std::cout << " | ";
        for (const auto& column : row) {
            std::cout << column << " | ";
        }
         std::cout << "\n";
    }
    std::cout << "\n";
}