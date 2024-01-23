#include <iostream>

int binarySearch(int *A, int lo, int hi, int k){
    // Base Case
    if(hi < lo){
        return 0;
    }
    // Here we calculate midpoint
    int mid = lo + ((hi-lo)/2);
    // Key found?? checks if key is at midpoint
    if (A[mid] == k){
        return mid;
    }
    if(A[mid] < k){
        return binarySearch(A, mid+1, hi, k);
    }
    return binarySearch(A, lo, mid - 1, k);
}

// We put in high and low for binary search
// What it does is test if high is less than low we terminate and put NOT_FOUND
// then after base case is done we start testing by finding midpoint
// Then we check if we got it on the dot and new midpoint is the number we are looking for
// if not we then go to the if statement that asks if mid is less than k
// If it is we recall the binSearch but with mid+1 as its low and h stays the same
// If none of those go it goes to the last return case thats saved for returing if number is to the left of sort
// And now it searches to the left of the sort by making low stay the same and the new high is midpoint - 1
// It will continue to recurse through this funciton until it finalizes with its only other 2 return cases of Yes found and no NOT_FOUND
// NOT_FOUND would prob be a bool or a cout with a return as not there.

int main(){
    int A[] = {10,20,30,40,50,60,70,80,90,100};
    int hi = A.size();
    int found = binarySearch(A, 0, hi, 40);
    std::cout << found << std::endl;

}