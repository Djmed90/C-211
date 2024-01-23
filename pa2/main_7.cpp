#include <iostream>

int main(){
    long n,digit;
    std::cin >> n;
    int sum = 0;
    while(n > 0){
        digit = n % 10;
        if (digit % 2 == 0){
            sum += digit;
        }
        n /= 10;
    }

    std::cout << sum << std::endl ;


    return 0;
}