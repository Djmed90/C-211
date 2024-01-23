#include <iostream>
#include <string>

std::string convertLower(const std::string& input){
    //Convert all to lowercase
    std::string lowerString = input;
    for(char &c : lowerString){
        c = std::tolower(c);
    }
    return lowerString;
}

int findSymbol(const std::string& input){
    int length = 0;
    for(int i = 0; i < input.length(); ++i){
        if(input[i] == '+' || input[i] == '@' || input[i]== '0' || input[i]== '1' || input[i]== '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9' || input[i] == '-' || input[i] == '.'){
            length = i;
            break;
        }
    }
    return length;
}

std::string emailCondense(const std::string& input){
    std::string condense;
    int length = findSymbol(input);
    for(int i = 0; i < length; ++i){
        if(input[i] != '.'){
            condense.push_back(input[i]);
        }
    }
    return condense;
}

int main(){
    std::string input;
    std::getline(std::cin, input); //This gets spaces when you iput
    std::string input2;
    std::getline(std::cin, input2);

    std::string condense = emailCondense(input);
    std::string condense1 = emailCondense(input2);
    std::string lowerOne = convertLower(condense);
    std::string lowerTwo = convertLower(condense1);
    if(lowerOne == lowerTwo){
       std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }


    return 0;
}