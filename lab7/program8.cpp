#include <iostream>

void point( int*& max,int myArray[],int n){
    for(int i = 0; i < n; ++i){
        if(myArray[i] > *max){
            max = &myArray[i];
            std::cout << *max << std::endl;
        }
    }
}

int main(){
    int n;
    std::cin >> n;
    int myArray[n];
    for( int i = 0; i < n; ++i ){
        int lol;
        std::cin >> lol;
        myArray[i] = lol;
    }
int* max;
    max = &myArray[0];
    for(int i = 0; i < n; ++i){
        if(myArray[i] > *max){
            max = &myArray[i];
        }
    }
    std::cout << *max << std::endl;
    return 0;
}