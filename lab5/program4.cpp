#include <iostream>

int countDig(int n) {

    int count = 0;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {

    int n;

    std::cin >> n;

    int result = countDig(n);

    std::cout<< result << std::endl;


    return 0;
}