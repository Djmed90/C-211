#include <iostream>

int findmin(int array[], int size){
    int min = array[0];
    for(int i = 0; i < size; i++){
        if(array[i]< min){
            min = array[i];
        }

    }
    return min;
}



int main(){
    int size;
    std::cin >> size;
    int myarray[size];
    for(int i = 0; i < size; i++){
        int temp;
        std::cin >> temp;
        myarray[i] = temp;
    }
    int min = findmin(myarray,size);
    std::cout << min << std::endl;
}