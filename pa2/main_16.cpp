#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


bool isCircularPrime(int n){
    std::string nstring = std::to_string(n);
    int nDigit = nstring.size();

    for(int i =0; i < nDigit; ++i){
        char temp = nstring[0];
        for(int j = 1; j < nDigit; ++j){
            nstring[j - 1] = nstring[j];
        }
        nstring[nDigit - 1] = temp;
        int rotatedNum = std::stoi(nstring);
        if (!isPrime(rotatedNum)) {
            return false;
        }
    }
    return true;
}



int main(){
    int n;

    std::cin >> n;

    if(isCircularPrime(n)){
        std::cout << "True" << std::endl;
    } else{
        std::cout << "False" << std::endl;
    }

return 0;
}