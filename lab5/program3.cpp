#include <iostream>

std::string convert(int a){
    std::string binary = "";
    while( a > 0){
        int remainder = a % 2;
        binary = char(remainder + '0') + binary;
        a /= 2;

    }
    return binary;
}

int main(){

    int a;
    std::cin >> a;

    std::string binary = convert(a);
    std::cout << binary << std::endl;

    return 0;
}