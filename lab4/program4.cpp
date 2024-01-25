#include <iostream>

int main(){
    int num = 1;
    int i = 0;
        while(i < num) {
            std::cin >> num;
            if(num == 0){break;}
            std::cout << num << std::endl;
            i = 0;
    }

    return 0;
}

