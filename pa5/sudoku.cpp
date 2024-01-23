#include "sudoku.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// reads a file containing a sudoku puzzle represented as
// 9 rows, each consisting of 9 comma-separated values
Sudoku::Sudoku(const char *fname) {
    // create a file reader stream to read data from a file
    ifstream infile;

    // will store lines and numbers
    string line, number;

    // index to write value to in puzzle
    int i = 0;

    // open a stream to the given file
    infile.open(fname);

    // get a line of input from the file
    while(getline(infile, line)) {
        // store the line inside a stringstream
        stringstream parser(line);
        // use stringstream to split line along ','
        while(getline(parser, number, ',')) {
            // convert string to an integer, store it, and update iterator
            puzzle[i++] = stoi(number);
        }
    }
    // close the filestream once we are done wiht it
    infile.close();
}

// destruct Sudoku object
Sudoku::~Sudoku() {
    // since we never allocated any memory on the heap, we don't need
    // to define behavior for the deconstructor
}

// this is the funciton call which will be made by the autograder to test
// your implementation for problem 3. It takes no parameters and
// should overwrite the 0s in puzzle to so that it represents a solved puzzle
// this is the function call which will be made by the autograder to test
// your implementation for problem 3. It takes no parameters and
// should overwrite the 0s in puzzle to so that it represents a solved puzzle

// Private helper method for backtracking
// Function to check if a move is valid
// Function to check if a number is used in the current row
bool Sudoku::usedInRow(int row, int num) {
    for (int col = 0; col < 9; ++col) {
        if (puzzle[row * 9 + col] == num) {
            return true;
        }
    }
    return false;
}

// Function to check if a number is used in the current column
bool Sudoku::usedInCol(int col, int num) {
    for (int row = 0; row < 9; ++row) {
        if (puzzle[row * 9 + col] == num) {
            return true;
        }
    }
    return false;
}

// Function to check if a number is used in the current 3x3 box
bool Sudoku::usedInBox(int boxStartRow, int boxStartCol, int num) {
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            if (puzzle[(boxStartRow + row) * 9 + boxStartCol + col] == num) {
                return true;
            }
        }
    }
    return false;
}

bool Sudoku::isValidMove(int row, int col, int num) {
    // Check if the number is not in the current row, column, and box
    return !usedInRow(row, num) && !usedInCol(col, num) && !usedInBox(row - row % 3, col - col % 3, num);
}

bool Sudoku::solveHelper(int row, int col) {
    // Base case: If we have reached the end of the puzzle, return true
    if (row == 9) {
        return true; // Puzzle is solved
    }

    // Move to the next row if we have reached the end of the current row
    if (col == 9) {
        return solveHelper(row + 1, 0);
    }

    // Skip cells that are already filled
    if (puzzle[row * 9 + col] != 0) {
        return solveHelper(row, col + 1);
    }

    // Try placing numbers from 1 to 9
    for (int num = 1; num <= 9; ++num) {
        if (isValidMove(row, col, num)) {
            // Place the number if it's a valid move
            puzzle[row * 9 + col] = num;

            // Recursively try to solve the rest of the puzzle
            if (solveHelper(row, col + 1)) {
                return true; // Puzzle is solved
            }

            // If placing the number didn't lead to a solution, backtrack
            puzzle[row * 9 + col] = 0;
        }
    }

    // No number worked in this cell, backtrack
    return false;
}

void Sudoku::solve() {
    solveHelper(0, 0);
}
// this function prints your puzzle in 2D format with commas
// separating your values
void Sudoku::print() {
    for(int i = 0; i < 9; i++) {
        std::cout << puzzle[i*9];
        int base = i*9;
        for(int offset = 1; offset < 9; offset++) {
            std::cout << ',' << puzzle[base + offset];
        }
        std::cout << std::endl;
    }
}