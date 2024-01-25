#ifndef DATE_H
#define DATE_H

class Date {
    public:
        int month;
        int year;
        int day;
        
        Date();
        Date(const Date &someDate);

        void print();
        void set(int m, int d, int y);

        void operator++(int);
};

#endif