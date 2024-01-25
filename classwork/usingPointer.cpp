#include <iostream>

int main(){
    char *p;
    char myArray[80] = "hello";
    int length = 5;

    p= &myArray[length - 1]

    for(int i = length; i > 0; i--){
        std::cout << *p;
        p--;
    }

    return 0;
}