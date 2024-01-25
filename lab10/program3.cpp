#include <iostream>

int calculateMedian(int array[], int size){
    int median = 0;
    if(size % 2 == 0){
        int middle = array[size/2] + array[size/2 + 1];
        median = middle / 2;
    }
    else{
        median = array[size/2];
    }
    return median;
}



int main(){
    int size = 8;
    int myarray[size] = {5,4,3,7,14,9,2,3};
    int min = calculateMedian(myarray,size);
    std::cout << min << std::endl;
}