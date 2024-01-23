#include <iostream>
#include <string>

void Rug(int n) {

    std::cout << "#" << std::string(n * 4, '=') << "#" << std::endl;

    for (int i = 0; i < n; ++i) {
        std::string spaces((n - i - 1) * 2, ' ');
        std::string pattern = "<>" + std::string(i * 4, '.') + "<>";
        std::cout << "|" << spaces << pattern << spaces << "|" << std::endl;
    }

    for (int i = n - 1; i >= 0; --i) {
        std::string spaces((n - i - 1) * 2, ' ');
        std::string pattern = "<>" + std::string(i * 4, '.') + "<>";
        std::cout << "|" << spaces << pattern << spaces << "|" << std::endl;
    }

    std::cout << "#" << std::string(n * 4, '=') << "#" << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    Rug(n);
    return 0;
}

