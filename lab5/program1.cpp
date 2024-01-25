#include <iostream>
int add(int a, int b);
int mult(int a, int b);
int exp(int a, int b);

int main() {
    std::cout << exp(2, 6) << std::endl;
}

int exp(int a, int b) {
    int result = mult(a,b);
    return result;

}

int mult(int a, int b) {
    int sum = add(a,b);

    return sum;
    //add a to a sum, b times
    //return sum
}

int add(int a, int b) {
    int result = 0;
    for( int i = 1; i <= b ; i++)
    {
        if(i > 2){
            result = a * result;
        }
         if(i == 2){
            result = a + a;
        }
    }
    return result;
    //add a to b
    //return result
}