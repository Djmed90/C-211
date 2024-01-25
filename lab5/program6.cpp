#include <iostream>

int main(){
    int n;
    std::cin >> n;
    //rows
    for(int row = 0; row < n; row++)
    {
        for(int space = (n - (1 + row)); space > 0; space--){
            std::cout << " ";
        }
        int col = 0;
        for( ; col < 1 + row; col++){
            std::cout <<((row + 1 + col)%10);
            }
        for(col -= 2; col >= 0; col--){

                std::cout <<((row + 1 + col)%10);
            }
        std::cout<< "\n";
        }
    }