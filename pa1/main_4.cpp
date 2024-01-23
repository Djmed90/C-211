#include <iostream>


int main(){

    int a, b;
    char c;

    std::cin >> a >> b >> c;
    if(c == '/'){std::cout <<  a << " / " <<  b << " = " << a / b;}
    if(c == '+'){std::cout <<  a << " + " <<  b << " = " << a + b;}
    if(c == '*'){std::cout <<  a << " * " <<  b << " = " << a * b;}
    if(c == '-'){std::cout <<  a << " - " <<  b << " = " << a - b;}

    return 0;
}
