#include <iostream>
#include <vector>
#include <iomanip>


int main(){
    // C is how many test cases
    int c;
    std::cin >> c;
    for(int i = 0; i < c; ++i){
        int n; // for students
        std::cin >> n;
        // Make vector containing grades
        std::vector<int> grades(n);
        for (int j = 0; j < n; ++j)
        {
            std::cin >> grades[j];
        }

        int sum = 0; // Add grades together to get avg
        for (int j = 0; j < n; ++j) {
            sum += grades[j];
        }

        double avrg = (double) sum / n; // get avrg
        int aboveAvrg = 0;
        for(int j = 0; j < n; ++j){
            if(grades[j] > avrg){
                aboveAvrg++;  // CHeck to see how many students above avg
            }
        }
        // Turn avg into float or else wont wrok and give u zeros then find percent value
        double percentAvg = (double)aboveAvrg/n * 100;

        std::cout << std::fixed << std::setprecision(3) << percentAvg << "%" << std::endl;

    }


    return 0;

}