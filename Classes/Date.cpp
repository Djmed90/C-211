#include "Date.h"
#include <iostream>


void Date::print() {
    std::cout << month << '-'
            << day << '-'
            << year << std::endl;
}

void Date::operator++(int){
    this->day++;
}


Date::Date(){

}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

Date::Date(const Date &someDate){
    this-> day= some.day();
    this-> month =some.month()
    this-> year = some.year()
}