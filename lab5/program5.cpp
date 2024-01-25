#include <iostream>

int reversenum(int n) {
    int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

int main() {
    int n;

    std::cin >> n;

    int reverse = reversenum(n);

    std::cout << reverse << std::endl;

    return 0;
}