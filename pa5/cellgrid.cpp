#include "cellgrid.h"
#include <iostream>
#include <fstream>
using namespace std;

// reads a file containing 1's and 0's and the dimesnsions to expect and
// creates a Cellgrid object
Cellgrid::Cellgrid(const char *fname, int m, int n) {
    // assign row and col counters
    rows = m;
    cols = n;

    // create the grid on the heap, this will have to be deallocated later in
    // the destructor
    grid = new bool[rows*cols];

    // create a file reader stream to read data from a file
    ifstream infile;

    // open a stream to the given file
    infile.open(fname);

    // we are using row-major order in order to store this grid in 1D
    // instead of accessing grid like grid[a][b], we instead do:
    // grid[(a * number of columns) + b]
    for(int i = 0; i < rows; i++) {
        // calculate "(a * number of columns)" from above
        // in order to save some unnecessary computation
        int base = i * cols;
        for(int offset = 0; offset < cols; offset++) {
            // read data from filestream and store it in grid
            infile >> grid[base + offset];
        }
    }

    // close the filestream once we are done with it
    infile.close();
}

// destruct object where not implicit to the program
Cellgrid::~Cellgrid() {
    // since we allocated memory on the heap, we must deallocate that memory
    delete[] grid;
}

// this is the function call which will be made by the autograder to test
// your implementation for problem 1. (row, col) is the "start point" for
// counting the cells, conn is the type of connection to consider (4 or 8).
// Private helper function for backtracking
// Private helper function for backtracking
void countCellsHelper(int row, int col, int conn, bool* visited, int& cellCount, const bool* grid, int rows, int cols) {
    // Check if the current cell is within bounds and not visited
    if (row >= 0 && row < rows && col >= 0 && col < cols && !visited[row * cols + col] && grid[row * cols + col] == 1) {
        // Mark the current cell as visited
        visited[row * cols + col] = true;

        // Increment the cell count
        cellCount++;

        // Explore neighboring cells based on the type of connection
        if (conn == 4) {
            countCellsHelper(row - 1, col, conn, visited, cellCount, grid, rows, cols); // Up
            countCellsHelper(row + 1, col, conn, visited, cellCount, grid, rows, cols); // Down
            countCellsHelper(row, col - 1, conn, visited, cellCount, grid, rows, cols); // Left
            countCellsHelper(row, col + 1, conn, visited, cellCount, grid, rows, cols); // Right
        } else if (conn == 8) {
            countCellsHelper(row - 1, col, conn, visited, cellCount, grid, rows, cols); // Up
            countCellsHelper(row + 1, col, conn, visited, cellCount, grid, rows, cols); // Down
            countCellsHelper(row, col - 1, conn, visited, cellCount, grid, rows, cols); // Left
            countCellsHelper(row, col + 1, conn, visited, cellCount, grid, rows, cols); // Right
            countCellsHelper(row - 1, col - 1, conn, visited, cellCount, grid, rows, cols); // Up-Left
            countCellsHelper(row - 1, col + 1, conn, visited, cellCount, grid, rows, cols); // Up-Right
            countCellsHelper(row + 1, col - 1, conn, visited, cellCount, grid, rows, cols); // Down-Left
            countCellsHelper(row + 1, col + 1, conn, visited, cellCount, grid, rows, cols); // Down-Right
        }
    }
}

// Function to count cells in a blob using backtracking
int Cellgrid::countCells(int row, int col, int conn) {
    // Check if the starting cell is valid
    if (row < 0 || row >= rows || col < 0 || col >= cols || grid[row * cols + col] == 0) {
        return 0; // Invalid starting cell
    }

    // Initialize visited array
    bool* visited = new bool[rows * cols];
    for (int i = 0; i < rows * cols; i++) {
        visited[i] = false;
    }

    // Initialize cell count
    int cellCount = 0;

    // Call the helper function for backtracking
    countCellsHelper(row, col, conn, visited, cellCount, grid, rows, cols);

    // Deallocate memory for the visited array
    delete[] visited;

    return cellCount;
}


// this is the funciton call which will be made by the autograder to test
// your implementation for problem 2. conn is the type of connection
// to consider (4 or 8).
void countBlobsHelper(int row, int col, int conn, bool* visited, const bool* grid, int rows, int cols) {
    // Check if the current cell is within bounds and not visited
    if (row >= 0 && row < rows && col >= 0 && col < cols && !visited[row * cols + col] && grid[row * cols + col] == 1) {
        // Mark the current cell as visited
        visited[row * cols + col] = true;

        // Explore neighboring cells based on the type of connection
        if (conn == 4) {
            countBlobsHelper(row - 1, col, conn, visited, grid, rows, cols); // Up
            countBlobsHelper(row + 1, col, conn, visited, grid, rows, cols); // Down
            countBlobsHelper(row, col - 1, conn, visited, grid, rows, cols); // Left
            countBlobsHelper(row, col + 1, conn, visited, grid, rows, cols); // Right
        } else if (conn == 8) {
            countBlobsHelper(row - 1, col, conn, visited, grid, rows, cols); // Up
            countBlobsHelper(row + 1, col, conn, visited, grid, rows, cols); // Down
            countBlobsHelper(row, col - 1, conn, visited, grid, rows, cols); // Left
            countBlobsHelper(row, col + 1, conn, visited, grid, rows, cols); // Right
            countBlobsHelper(row - 1, col - 1, conn, visited, grid, rows, cols); // Up-Left
            countBlobsHelper(row - 1, col + 1, conn, visited, grid, rows, cols); // Up-Right
            countBlobsHelper(row + 1, col - 1, conn, visited, grid, rows, cols); // Down-Left
            countBlobsHelper(row + 1, col + 1, conn, visited, grid, rows, cols); // Down-Right
        }
    }
}

// Function to count blobs in the grid using backtracking
int Cellgrid::countBlobs(int conn) {
    // Initialize visited array
    bool* visited = new bool[rows * cols];
    for (int i = 0; i < rows * cols; i++) {
        visited[i] = false;
    }

    // Initialize blob count
    int blobCount = 0;

    // Iterate through each cell in the grid
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check if the cell is part of a blob and not visited
            if (grid[i * cols + j] == 1 && !visited[i * cols + j]) {
                // Call the helper function for backtracking to count blobs
                countBlobsHelper(i, j, conn, visited, grid, rows, cols);
                // Increment the blob count for each new blob found
                blobCount++;
            }
        }
    }

    // Deallocate memory for the visited array
    delete[] visited;

    return blobCount;
}

// this function prints your cellgrid in 2D format without trailing
// whitespace. Use this function to aid in debugging if you wish
void Cellgrid::print() {
    for(int i = 0; i < rows; i++) {
        int base = i * cols;
        std::cout << grid[base];
        for(int offset = 1; offset < cols; offset++) {
            std::cout << ' ' << grid[base + offset];
        }
        std::cout << std::endl;
    }
}