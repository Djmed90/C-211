#include <iostream>

int main(){

    int a,b,c;
    std::cin >> a >> b >> c;

    int smallest = a;
    if( smallest > b)smallest = b;

    if( smallest > c)smallest = c;

    std::cout << "The smallest number entered was " << smallest;

    return 0;

}