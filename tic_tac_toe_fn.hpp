#include <vector>

std::vector<std::vector<std::string> > getNextMove(int player, std::vector<std::vector<std::string> > grid);
bool findWinner(std::vector<std::vector<std::string> > grid);
bool checkDraw(std::vector<std::vector<std::string> > grid);
void printGrid(std::vector<std::vector<std::string> > grid);