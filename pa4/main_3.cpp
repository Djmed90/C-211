#include <iostream>
#include <vector>

const int SIZE = 3;

// Function to print the puzzle
void printPuzzle(const std::vector<std::vector<int>>& puzzle) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << puzzle[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

// Function to find the position of the blank tile (0)
std::pair<int, int> findBlankTile(const std::vector<std::vector<int>>& puzzle) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (puzzle[i][j] == 0) {
                return std::make_pair(i, j);
            }
        }
    }
    // Blank tile not found, should not happen in a valid puzzle
    return std::make_pair(-1, -1);
}

// Function to check if a move is valid
bool isValidMove(int newRow, int newCol) {
    return newRow >= 0 && newRow < SIZE && newCol >= 0 && newCol < SIZE;
}

// Function to perform a move
void performMove(std::vector<std::vector<int>>& puzzle, const std::string& move) {
    std::pair<int, int> blankTilePos = findBlankTile(puzzle);
    int row = blankTilePos.first;
    int col = blankTilePos.second;

    int newRow = row;
    int newCol = col;

    if (move == "U") {
        newRow = row - 1;
    } else if (move == "D") {
        newRow = row + 1;
    } else if (move == "L") {
        newCol = col - 1;
    } else if (move == "R") {
        newCol = col + 1;
    }

    if (isValidMove(newRow, newCol)) {
        std::swap(puzzle[row][col], puzzle[newRow][newCol]);
    }
}

// Function to check if the puzzle is in the solved state
bool isSolved(const std::vector<std::vector<int>>& puzzle) {
    int expectedValue = 1;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (puzzle[i][j] != expectedValue % (SIZE * SIZE)) {
                return false;
            }
            ++expectedValue;
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> puzzle(SIZE, std::vector<int>(SIZE));

    // Input the initial state of the puzzle
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> puzzle[i][j];
        }
    }

    // Input the sequence of movement commands
    std::string command;
    while (std::cin >> command) {
        performMove(puzzle, command);
    }

    // Check if the puzzle is solved
    if (isSolved(puzzle)) {
        std::cout << "Solution is good!";
    } else {
        std::cout << "Wrong solution!";
    }

    return 0;
}
