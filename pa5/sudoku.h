/*  Sudoku Overview:
 *
 *  Sudoku takes a file of comma-separated lines and uses
 *  it to store a sudoku board state as a 1D array of ints
 *  in row-major order.
 *
 *  For Programming Assignment 05, this class will be used to
 *  test problem 3.
 *
 *  Problem 3 will be tested by calling the solve member function
 *
 *  Note: in a proper C++ class you would have Getters and Setters
 *  however, here we don't do that since all values are changed
 *  internally from within the class itself.
 */

#ifndef _SUDOKU_H_
#define _SUDOKU_H_

class Sudoku {
    private:
        // puzzle will store the Sudoku puzzle in 1D space
        int puzzle[81];
    public:
        /* Class constructors and destructors */
        // class constructor using a file
        Sudoku(const char *fname);
        // class destructor
        ~Sudoku();
        /* Member functions */
        // solve the sudoku puzzle
        void solve();
        // prints the Sudoku puzzle in 2D format
        void print();
        // Private helper method for backtracking
        bool solveHelper(int row, int col);
        // Function to check if a move is valid
        bool isValidMove(int row, int col, int num);
        // Function to check if a number is used in the current row
        bool usedInRow(int row, int num);
        // Function to check if a number is used in the current column
        bool usedInCol(int col, int num);
        // Function to check if a number is used in the current 3x3 box
        bool usedInBox(int boxStartRow, int boxStartCol, int num);
};
#endif
