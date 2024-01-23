#include <iostream>

int main(){

    int a;
    std::cin >> a;
    int holder = a;
    if(a < 0){holder = a * -1;}

    if(holder % 10 == 9){std::cout <<  a << " is good\n";}
    else{std::cout <<  a << " is no good\n";}

    return 0;

}