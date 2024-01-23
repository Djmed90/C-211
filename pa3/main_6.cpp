#include <iostream>
#include <string>

int hashValConvert(const std::string& input){
    int hashValue = 0;
    for(char letter : input){
        hashValue += letter;
    }
    return hashValue;
}



int main(){
    std::string input;
    std::getline(std::cin, input);
    int hashValue = hashValConvert(input);
    std::cout << hashValue << std::endl;



    return 0;
}