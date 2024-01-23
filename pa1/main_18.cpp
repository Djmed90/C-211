#include <iostream>
#include <iomanip>

int main(){

    int day, month, year;
    std::cin >> day >> month >> year;
    if(month == 1){month = 13, year = year - 1;}
    else if(month == 2){month = 14, year = year - 1;}
    int century = (year/100);
    int yearpart = year % 100;

    int weekday= (day + (month+1) * 26  /10 + yearpart + yearpart / 4 + century / 4 + 5 * century) % 7;

    switch(weekday){
    case 0:
        std::cout << "Saturday\n";
        break;
    case 1:
        std::cout << "Sunday\n";
        break;
    case 2:
        std::cout << "Monday\n";
        break;
    case 3:
        std::cout << "Tuesday\n";
        break;
    case 4:
        std::cout << "Wednesday\n";
        break;
    case 5:
        std::cout << "Thursday\n";
        break;
    case 6:
        std::cout << "Friday\n";
        break;
    }
    return 0;

}