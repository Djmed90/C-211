#include <iostream>
int main(){
    //rows
    for(int row = 1; row <= 4; row++){
        //spaces
            for(int space = row; space < 4; space++)
            {
                std::cout << " ";
            }
        //columns
            for(int col = 1; col <= (2 * row - 1); col++)
            {
                std::cout << "*";
            }
            std::cout << "\n";
        }
}