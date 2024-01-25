#include <iostream>

int findMaxIndex(int array[], int size){
    int max = array[0];
    int maxIndex = 0;
    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
            maxIndex = i;
        }

    }
    return maxIndex;
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
    int min = findMaxIndex(myarray,size);
    std::cout << min << std::endl;
}