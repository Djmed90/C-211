#include <iostream>

int main(){

    int month, day , year;
    std::cin >> month >> day >> year;

    switch(month){
        case 1:
        std::cout << "January " << day << ", " << year;
        break;
        case 2:
        std::cout << "February " << day << ", " << year;
        break;
        case 3:
        std::cout << "March " << day << ", " << year;
        break;
        case 4:
        std::cout << "April " << day << ", " << year;
        break;
        case 5:
        std::cout << "May " << day << ", " << year;
        break;
        case 6:
        std::cout << "June " << day << ", " << year;
        break;
        case 7:
        std::cout << "July " << day << ", " << year;
        break;
        case 8:
        std::cout << "August " << day << ", " << year;
        break;
        case 9:
        std::cout << "September " << day << ", " << year;
        break;
        case 10:
        std::cout << "October " << day << ", " << year;
        break;
        case 11:
        std::cout << "November " << day << ", " << year;
        break;
        case 12:
        std::cout << "December " << day << ", " << year;
        break;
        default:
        std::cout << "Imaginary month\n";
        break;
    }
    return 0;

}