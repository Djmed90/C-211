#include <iostream>
#include <string>

std::string reverse(const std::string& input){
    std::string reverseString;
    for(int i = input.length() - 1; i >= 0; --i){
        reverseString.push_back(input[i]);
    }
    return reverseString;
}

int main(){
    std::string input;
    std::getline(std::cin, input); //This gets spaces when you iput
    std::string reverseString = reverse(input);
    std::cout << reverseString << std::endl;
    return 0;
}