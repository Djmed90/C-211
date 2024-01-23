#include <iostream>

int main(){
    int a, b, c, len;
    std::cin >> a >> b >> c;
    // rows
    len = a;
    // First loop
    while(len <= b){
        for(int i = 0; i < len; ++i){
            std::cout << "+";
        }
        std::cout << std::endl;
        len += c;
    }
    // Reverse
    while(len > a){
        len -= c;

        for(int i = 0; i < len; ++i){
            std::cout << "+";
        }

        std::cout << std::endl;

    }

    return 0;
}