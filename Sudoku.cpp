#include "Sudoku.h"
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>

SudokuGameBoard::SudokuGameBoard()
{
}

SudokuGameBoard::~SudokuGameBoard()
{
}

void
SudokuGameBoard::generateNewGame()
{
    srand(time(0));
    zeroBoard();
    int candidate = 0;
    for(int row = 0; row < 9; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            while(mpBoard[row][col] == 0)
            //for (int i = 1; i < 10; i++)
            {
                //candidate = i;
                candidate = (rand() % 9) + 1;
                if(!isInRow(row, candidate) && !isInCol(col, candidate)
                    && !isInQuadrant(row, col, candidate))
                    mpBoard[row][col] = candidate;
            }
        }
    }
}

bool
SudokuGameBoard::isBoardGood()
{
    // Row-wise
    for(int row = 0; row < 9; row++)
    {
        clearIsPresent();
        for(int col = 0; col < 9; col++)
        {
            isPresent[mpBoard[row][col]] = (mpBoard[row][col] == 0) ? false : true;
        }
        for(int col = 0; col < 9; col++)
        {
            if(isPresent[mpBoard[row][col]])
                return false;
        }
    }

    // Column-wise
    for(int col = 0; col < 9; col++)
    {
        clearIsPresent();
        for(int row = 0; row < 9; row++)
        {
            if(isPresent[mpBoard[row][col]])
                return false;
        }
    }

    // Quadrant-wise
    for (int rowOffset = 0; rowOffset < 7; rowOffset += 3)
    {
        for (int colOffset = 0; colOffset < 7; colOffset += 3)
        {
            clearIsPresent();
            for (int row = rowOffset; row < (rowOffset + 3); row++)
            {
                for (int col = colOffset; col < (rowOffset + 3); col++)
                {
                    isPresent[mpBoard[row][col]] = (mpBoard[row][col] == 0) ? false : true;
                }
            }
        }
    }
    return true;
}

void
SudokuGameBoard::printBoard()
{
    for(int row = 0; row < 9; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            cout << mpBoard[row][col] << " ";
        }
        cout << endl;
    }
}

void
SudokuGameBoard::clearIsPresent()
{
    for (int i = 0; i < 10; i++)
        isPresent[i] = false;
}

void
SudokuGameBoard::zeroBoard()
{
    for(int row = 0; row < 9; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            mpBoard[row][col] = 0;
        }
    }
}

bool
SudokuGameBoard::isInRow(int row, int num)
{
    clearIsPresent();
    for (int col = 0; col < 9; col++)
    {
        isPresent[mpBoard[row][col]] = (mpBoard[row][col] == 0) ? false : true;
    }
    return isPresent[num];
}

bool
SudokuGameBoard::isInCol(int col, int num)
{
    clearIsPresent();
    for (int row = 0; row < 9; row++)
    {
        isPresent[mpBoard[row][col]] = (mpBoard[row][col] == 0) ? false : true;
    }
    return isPresent[num];
}

bool
SudokuGameBoard::isInQuadrant(int row, int col, int num)
{
    int rowOffset = 0;
    int colOffset = 0;
    switch (row)
    {
        case 0:
        case 1:
        case 2:
            rowOffset = 0;
            break;
        case 3:
        case 4:
        case 5:
            rowOffset = 3;
            break;
        case 6:
        case 7:
        case 8:
            rowOffset = 6;
            break;
    }
    switch (col)
    {
        case 0:
        case 1:
        case 2:
            colOffset = 0;
            break;
        case 3:
        case 4:
        case 5:
            colOffset = 3;
            break;
        case 6:
        case 7:
        case 8:
            colOffset = 6;
            break;
    }

    for (; rowOffset < 7; rowOffset += 3)
    {
        for (; colOffset < 7; colOffset += 3)
        {
            clearIsPresent();
            for (int row = rowOffset; row < (rowOffset + 3); row++)
            {
                for (int col = colOffset; col < (rowOffset + 3); col++)
                {
                    isPresent[mpBoard[row][col]] = (mpBoard[row][col] == 0) ? false : true;
                }
            }
        }
    }
    return isPresent[num];
}
