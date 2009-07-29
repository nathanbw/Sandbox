#include <iostream>
using std::cout;
using std::endl;
#include "Sudoku.h"

int main(int argc, char* argv)
{
    SudokuGameBoard theGameBoard;
    cout << theGameBoard.isBoardGood() << endl;
    //theGameBoard.generateNewGame();
    theGameBoard.printBoard();
}
