#include <iostream>
using std::cout;
using std::endl;
#include "Sudoku.cpp"

int main(int argc, char* argv)
{
    SudokuGameBoard theGameBoard;
    theGameBoard.generateNewGame();
    theGameBoard.printBoard();
}
