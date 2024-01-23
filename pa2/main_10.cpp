#include <iostream>

int main(){
    double loan, interest, payment;
    int months = 0;
    std::cin >> loan >> interest >> payment;
    while(loan > 0){
        double monthInt = (loan * interest);
        loan = loan + monthInt;
        loan = loan - payment;
        months = months + 1;
    }

    std::cout << months << std::endl;
    return 0;
}