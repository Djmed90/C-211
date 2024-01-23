#include <iostream>

int main() {
    char ch;
    std::cin >> ch;
        int rows = ch - 'A' + 1;
       // ROws
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < rows - i - 1 ; ++j) {
                std::cout << "  ";
            }

            // Letters!!
            for (int j = 0; j <= i; ++j) {
                std::cout  << (char)('A' + j);
                if(j < i){
                    std::cout << " ";
                }
            }
            //Oposite
            for (int j = i - 1; j >= 0; --j) {
                std::cout << " " << (char)('A' + j);
            }

            std::cout << std::endl;
        }


    return 0;
    }

//"                                            A "
//"                                            A"