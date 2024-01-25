#include <iostream>

void print_rev_arr(int *arr, int n) {
    if (n <= 0) {
        return;
    }
    std::cout << arr[n - 1] << std::endl;
    return print_rev_arr(arr, n - 1);
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_rev_arr(arr, n);


    return 0;
}