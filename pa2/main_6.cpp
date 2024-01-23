#include <iostream>

int main(){
    int n,s;
    int sum= 0;
    std::cin >> n >> s;
    for( int i = 1; i <= s; i++){
        sum += n;
        n -= 1;
    }

    std::cout << sum << std::endl;

    return 0;
}