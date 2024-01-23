#include <iostream>
#include <string>
std::string filter(const std::string& input){
    std::string filterString;
    char lastLetter = '\n';
    for(char letter : input){
        if(letter != lastLetter){
            filterString.push_back(letter);
            lastLetter = letter;
        }
    }
    return filterString;
}

int main(){
    std::string input;
    std::getline(std::cin, input);
    std::string filterString = filter(input);
    std::cout << filterString << std::endl;
    return 0;
}