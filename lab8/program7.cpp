#include <iostream>

int sum(int* arr, int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
    int n;
    std::cout << "Array size ";
    std::cin >> n;

    int arr[n];

    std::cout << "elements of array" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int result = sum(arr, n);

    std::cout << result << std::endl;

    return 0;
}
