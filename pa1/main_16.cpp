#include <iostream>
#include <iomanip>

int main(){

    double temp;
    char letter;

    std::cin >> temp >> letter;


    if(letter == 'C'){std::cout << std::fixed << std::setprecision(4) << temp << " degree(s) " << letter << " is equal to " << (temp*9/5)+32 << " degree(s) F\n";}
    else if(letter == 'F'){std::cout << std::fixed << std::setprecision(4) << temp << " degree(s) " << letter << " is equal to " << (temp-32)*5/9 << " degree(s) C\n";}

    return 0;

}