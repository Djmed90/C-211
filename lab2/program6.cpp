#include <iostream>


int main() {
    int low, high, test;

    std::cin >> low;

    std::cin >> high;

    std::cin >> test;



    if (low <= test && test <= high) {
         std::cout<<"True" ;
    }

    return 0;
}