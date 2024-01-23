#include <iostream>
#include <iomanip>

int main(){

    int a1,a2,a3;
    std::cin >> a1 >> a2 >> a3;

    if(a1 + a2 + a3 != 180){std::cout << "This triangle is impossible\n";}
    else if( a1 == 90 || a2 == 90 || a3 == 90){std::cout << "Right\n";}
    else if(a1 < 90 && a2 < 90 && a3 < 90){std::cout << "Acute\n";}
    else{std::cout << "Obtuse\n";}


    return 0;

}