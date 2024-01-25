#include <iostream>

int makeChange ( int value, int * coins, int coinCount){
    if(value < 0 || coinCount == 0){ return 0; }
    if(value == 0){ return 1; }

    return makeChange(value - coins[0],coins,coinCount) + makeChange(value, coins + 1, coinCount - 1);
}
int main(){
    int coins[] = {25,10,5,1};
    std::cout << makeChange(10,coins,4) << std::endl;
}