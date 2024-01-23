#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n > 0 && n < 10 && n % 2 != 0) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j || i + j == n - 1) {
                    std::cout << "*";
                }else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Sorry, not odd" << std::endl;
    }

    return 0;
}