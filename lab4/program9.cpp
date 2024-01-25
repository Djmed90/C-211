#include <iostream>

int main() {

    //Height    4
    //Width     14

    for (int i = 0; i < 4; ++i) {
        //left
        for (int j = 0; j < i * 2; ++j) {
            std::cout << "\\";
        }

        // exclamation
        for (int j = 0; j < 14 - i * 4; ++j) {
            std::cout << "!";
        }

        // Right
        for (int j = 0; j < i * 2; ++j) {
            std::cout << "\\";
        }

        std::cout << "\n" ;
    }

    return 0;
}