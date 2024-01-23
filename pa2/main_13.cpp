#include <iostream>
#include <cmath>

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

int main(){
    int n,digit;
    std::cin >> n;
    int length = countDigits(n);
    int sum = 0;
    int temp = n;
    while (n > 0){
        digit = n % 10;
        sum += pow(digit,length);
        n /= 10;
    }
    if(sum == temp){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    return 0;
}