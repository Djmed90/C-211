#include <iostream>
#include <vector>

int count_first(const std::vector<int> &numbers){
    int first = numbers[0];
    int count = 0;
    for(int i = 0; i < numbers.size(); ++i){
        if(numbers[i]== first){
            count += 1;
        }
    }
    return count;

}



int main(){
    std::vector<int> numbers;
    int num;

    while(std::cin >> num){
        numbers.push_back(num);
    }

    int count = count_first(numbers);
    std::cout << count << std::endl;
}