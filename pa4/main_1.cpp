#include <iostream>

bool HorizonCheck(int myArray[9][9]) {
    for (int i = 0; i < 9; i++) {
        bool found[9] = {false};
        for (int j = 0; j < 9; j++) {
            int current = myArray[i][j];
            if (current != 0 && found[current - 1]) {
                return false;
            }
            found[current - 1] = true;
        }
    }
    return true;
}

bool VertCheck(int myArray[9][9]) {
    for (int i = 0; i < 9; i++) {
        bool found[9] = {false};
        for (int j = 0; j < 9; j++) {
            int current = myArray[j][i];
            if (current != 0 && found[current - 1]) {
                return false;
            }
            found[current - 1] = true;
        }
    }
    return true;
}

bool BoxCheck(int myArray[9][9]) {
    for (int row = 0; row < 9; row += 3) {
        for (int col = 0; col < 9; col += 3) {
            bool found[9] = {false};
            for (int i = row; i < row + 3; i++) {
                for (int j = col; j < col + 3; j++) {
                    int current = myArray[i][j];
                    if (current != 0 && found[current - 1]) {
                        return false;
                    }
                    found[current - 1] = true;
                }
            }
        }
    }
    return true;
}

bool sudokuChecker(int myArray[9][9]) {
    return HorizonCheck(myArray) && VertCheck(myArray) && BoxCheck(myArray);
}

int main() {
    int myArray[9][9];

    // Input the Sudoku board
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cin >> myArray[i][j];
        }
    }

    if (sudokuChecker(myArray)) {
        std::cout << "Solution is good!";
    } else {
        std::cout << "Wrong solution!";
    }

    return 0;
}
