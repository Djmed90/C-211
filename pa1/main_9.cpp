#include <iostream>

int main(){

    int a;
    std::cin >> a;

    if( a < 16 ){std::cout << "Too young\n";}
    else if( a >= 16 && a < 18){std::cout << "Can drive\n";}
    else if( a >= 18 && a < 21){std::cout << "Can join the military\n";}
    else{std::cout << "Can have a beer\n";}

    return 0;

}