#include <iostream>

int main(){

    double x,y;
    std::cin >> x >> y;

    if(x > 0 && y > 0 ){std::cout << "Quadrant 1\n";}
    if(x < 0 && y > 0 ){std::cout << "Quadrant 2\n";}
    if(x < 0 && y < 0 ){std::cout << "Quadrant 3\n";}
    if(x > 0 && y < 0 ){std::cout << "Quadrant 4\n";}
    if( x ==0 || y == 0){std::cout << "No quadrant\n";}
    return 0;

}