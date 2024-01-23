#include <iostream>
#include <vector>

bool sorted(const std::vector<int> numbers){
    int temp = numbers[0];
    for(int i = 1; i < numbers.size(); ++i){
        if(numbers[i] >= temp){
            temp = numbers[i];
        }
        else{
            return false;
        }
    }
    return true;
}



int main(){
    std::vector<int> numbers;

    int num;
    while(std::cin >> num){
        numbers.push_back(num);
    }

    bool sort = sorted(numbers);

    if(sort){
        std::cout<< "Sorted" << std::endl;
    }
    else{
        std::cout << "Not Sorted" << std::endl;
    }
}