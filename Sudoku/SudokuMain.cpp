#include <iostream>
using std::cout;
using std::endl;
#include "Sudoku.h"

int main()
{
    SudokuGameBoard theGameBoard;
    //cout << theGameBoard.isBoardGood() << endl;
    theGameBoard.generateNewGame();
    theGameBoard.printBoard();
    return 0;
}
