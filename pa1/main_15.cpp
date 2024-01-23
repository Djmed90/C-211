#include <iostream>

int main(){

    double a,ans;
    std::cin >> a;

    ans = (a*9/5)+32;

    if(ans <= 32){std::cout << "It is cold out\n";}
    else if(ans > 32 && ans <= 65){std::cout << "Wear a jacket\n";}
    else{std::cout << "It is nice out\n";}

    return 0;

}