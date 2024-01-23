#include <iostream>

int main(){
    int n;
    std::cin >> n;
    long factorial = 1;
    for(int i = 1; i <= n; i++){ factorial *= i;}
    if (factorial < 0 || factorial > 2147483647) {
                std::cout << "Can't handle this" << std::endl;
                return 0;
            }
    std::cout << factorial << std::endl;
    return 0;
}