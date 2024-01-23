#include <iostream>

int main(){

    int num;
    int sum = 0;
    std::cin >> num;

    for(int i = 1; i < num; ++i){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    return 0;
}