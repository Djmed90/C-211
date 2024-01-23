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

bool isPalendrome(const std::string& lowerString){
    int left = 0;
    int right = lowerString.length() - 1;
    while(left < right){
        if(lowerString[left] != lowerString[right]){
            return false;
        }
        left ++;
        right --;
    }
    return true;
}

int main(){
   std::string input;
    std::getline(std::cin, input);
    // Could combine under 1 fucntion call but im lazy to change
    std::string lowerString = convertLower(input);
    bool isPalen = isPalendrome(lowerString);

    if(isPalen){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    return 0;
}