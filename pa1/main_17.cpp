#include <iostream>

int main(){

    char letter;
    std::cin >> letter;

    if(letter == 'a' || letter == 'A'){std::cout << "Excellent\n";}
    else if(letter == 'b' || letter == 'B'){std::cout << "Good\n";}
    else if(letter == 'c' || letter == 'C'){std::cout << "Average\n";}
    else if(letter == 'd' || letter == 'D'){std::cout << "Poor\n";}
    else{std::cout << "Failing\n";}

    return 0;

}