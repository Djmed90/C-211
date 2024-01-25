#include <iostream>

bool is_prime(int someNum){
    for(int i = 2 ; i < someNum; i ++){
        if(someNum % i == 0){
            return false;
        }
    }

    return true;
}

int highestPrime(int n){
    int highPrime = 0;

    for(int i = n ; i > 0 ; i--){
        if(is_prime(i)){
            highPrime = i;
            return highPrime;
        }

    }
    return highPrime;
}


int main(){

    std::cout << highestPrime(12);

    return 0;
}