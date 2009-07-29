OBJECTS = Sudoku.o SudokuMain.o
FLAGS = -g -Wall -Wunused -Wextra -pedantic -ansi
all: $(OBJECTS)
		g++ $(OBJECTS) -o Sudoku
SudokuMain.o: Sudoku.h Sudoku.cpp SudokuMain.cpp
		g++ $(FLAGS) -c SudokuMain.cpp
Sudoku.o: Sudoku.h Sudoku.cpp
		g++ $(FLAGS) -c Sudoku.cpp
