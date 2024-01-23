#include <iostream>

int main(){
    long n,k;
    std::cin >> n >> k ;
    long pow = 1;
    for(int i = 1; i <= k; i++){
        pow *= n;
    }

    std::cout << pow << std::endl;

    return 0;
}