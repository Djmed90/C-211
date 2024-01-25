#include <iostream>
#include <cmath>


int main(){
    int speed;

    std::cout << "What is your speed?";
    std::cin >> speed;
    if(speed < 50){
        std::cout << "Safe";
    }
    else if(speed >= 50 && speed <= 55){
        std::cout << "Pushing your luck";
    }
    else if(speed > 55){
        std::cout << "Speeding";
    }

    return 0;
}