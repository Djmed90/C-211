#include <iostream>

int fib(int number){
    if(number == 0 || number == 1){
        return number;
    }
    else{
        return fib(number - 1) + fib(number - 2);
    }
}

int main(){
    int number;
    std::cin >> number;
    int sum = fib(number);
    std::cout << sum << std::endl;

    return 0;
}