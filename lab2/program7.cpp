#include <iostream>

int main() {
    int num1, num2, num3;

    std::cin >> num1;

    std::cin >> num2;

    std::cin >> num3;

    int max_num = num1;

    if (num2 > max_num) {
        max_num = num2;
    }

    if (num3 > max_num) {
        max_num = num3;
    }

    std::cout << max_num ;


    return 0;
}