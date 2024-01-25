#include <iostream>

int sum_digits(int n) {
    if (n < 10) {
        return n;
    } else {
        return n % 10 + sum_digits(n / 10);
    }
}

int main() {
    int n;
    std::cin >> n;
    int result = sum_digits(n);
    std::cout << result << std::endl;
    return 0;
}
