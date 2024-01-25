#include <iostream>
#include <cmath>
#include <cstring>
#include <string>

int main(){
    int n;
    std::string str = "";
    bool is_div2 = false;

    std::cout << "Give me a number";
    std::cin >> n;

    if( n % 2 == 0){
        str.append("1");
        is_div2 = true;
    }
    if( n % 2 != 0){
        str.append("2");
    }
    if(is_div2 == true){
        str.append("3");
    }
    if( n % 3 == 0){
        str.append("4");
    }

    std::cout << str;
    return 0;
}
