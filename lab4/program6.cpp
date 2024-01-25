#include <iostream>
int main(){
    //rows
    for(int row = 0; row < 4; row++){
        //spaces
        for(int space= (7-(1+row)); space < 0; space--){
            std::cout << " ";
        }
    //columns
        for(int col = 0; col < 1 +(row *2); col++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}