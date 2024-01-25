#include <iostream>

int main(){
    //rows
    for(int row = 0; row < 4; row++)
    {
        for(int space = (7 - (1 + row)); space > 0; space--){
            std::cout << " ";
        }
        int col = 0;
        for( ; col < 1 + row; col++){
            std::cout <<(row + 1 + col);
            }
        for(col -= 2; col >= 0; col--){

                std::cout <<(row + 1 + col);
            }
        std::cout<< "\n";
        }
    }
