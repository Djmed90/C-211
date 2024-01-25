#include <iostream>

void printStars(int numStars) {
    for (int i = 0; i < numStars; ++i) {
        std::cout << "+";
    }
}

void pyr(int levels, int current_level) {
    // Base case: if the current level is greater than or equal to the specified number of levels, return
    if (current_level > levels) {
        return;
    }

    //  stars
    printStars(current_level);
    std::cout << std::endl;
    pyr(levels, current_level + 1);

    // reverse stars
    if (current_level != levels) {
        printStars(current_level);
        std::cout << std::endl;
    }
}

int main() {
    int levels;
    std::cin >> levels;
    int current_level = 1;
    pyr(levels, current_level);

    return 0;
}