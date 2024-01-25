#include "Date.h"
#include <iostream>

int main() {
    Date today;

    today.day = 11;
    today.month = 16;
    today.year = 2021;

    today.print();

    today++;

    today.print();

    return 0;
}