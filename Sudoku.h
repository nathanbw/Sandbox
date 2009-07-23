class SudokuGameBoard
{
    public:
        SudokuGameBoard();
        ~SudokuGameBoard();
        void generateNewGame();
        bool isBoardGood();
        void printBoard();
    private:
        int mpBoard[9][9];
        bool isPresent[10];
        void clearIsPresent();
        void zeroBoard();
        bool isInRow(int, int);
        bool isInCol(int, int);
        bool isInQuadrant(int, int, int);
};
