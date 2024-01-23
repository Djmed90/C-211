#include <iostream>
#include <vector>

int countLiveNeighbors(const std::vector<std::vector<char>>& grid, int row, int col) {
    int count = 0;
    int numRows = grid.size();
    int numCols = grid[0].size();

    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (i == 0 && j == 0)
                continue;
            int newRow = row + i;
            int newCol = col + j;

            // Check if alive
            if (newRow >= 0 && newRow < numRows && newCol >= 0 && newCol < numCols && grid[newRow][newCol] == '*') {
                count++;
            }
        }
    }

    return count;
}

// Function to simulate one generation of the Game of Life
std::vector<std::vector<char>> simulateGeneration(const std::vector<std::vector<char>>& currentGen) {
    int numRows = currentGen.size();
    int numCols = currentGen[0].size();

    // Next gen grid
    std::vector<std::vector<char>> nextGen(numRows, std::vector<char>(numCols, '.'));

    // Rules
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            int liveNeighbors = countLiveNeighbors(currentGen, i, j);

            if (currentGen[i][j] == '*' && (liveNeighbors < 2 || liveNeighbors > 3)) {
                // Rule 1 & 2
                nextGen[i][j] = '.';
            } else if (currentGen[i][j] == '.' && liveNeighbors == 3) {
                // Rule 4
                nextGen[i][j] = '*';
            } else {
                // Rule 3
                nextGen[i][j] = currentGen[i][j];
            }
        }
    }

    return nextGen;
}

int main() {
    int m, n, g;
    std::cin >> m >> n >> g;

    //Grid
    std::vector<std::vector<char>> grid(m, std::vector<char>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> grid[i][j];
        }
    }

    // Make generations
    for (int generation = 0; generation < g; ++generation) {
        grid = simulateGeneration(grid);
    }

    for (const auto& row : grid) {
        for (size_t i = 0; i < row.size(); ++i) {
            std::cout << row[i];
            if (i < row.size() - 1) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }

    return 0;
}
