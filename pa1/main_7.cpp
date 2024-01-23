#include <iostream>

int main(){

    int a;
    std::cin >> a;

    if( a % 8 == 0 && a > 100){std::cout <<  a << " satisfies the criteria\n";}
    else{std::cout <<  a << " does not satisfy the criteria\n";}
    return 0;

}