#include <iostream>

int main(){
    int num;
        for (int i = 0 ; i <= 10 ; ++i) {
             std::cin >> num;
             if( num == 0){break;}
            std::cout << num << std::endl;
            i = 0;
    }

    return 0;
}

