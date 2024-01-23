#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Spaces
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }

        // Star
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}