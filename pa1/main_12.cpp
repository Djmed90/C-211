#include <iostream>
#include <iomanip>

int main(){

    double a,b,c;
    std::cin >> a >> b >> c;

    double answ = (a+b+c)/3;

    std::cout << std::fixed << std::setprecision(4) << "The average of " << a << ", "<< b << ", and " << c << " is " << answ;

    return 0;

}