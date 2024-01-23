#include <iostream>
#include <string>

int findUnique(const std::string& input){
    bool found = false;
    int unique = 0;
    for(int i = 0; i <= input.length() - 1; ++i){
        found = false;
        for(int j = i - 1; j >= 0; --j){
            if(input[i] == input[j]){
                found = true;
                break;
            }
        }
        if(found == false){
            unique += 1;
        }
        }
        return unique;
    }

int main(){
    std::string input;
    std::getline(std::cin, input);
    int unique = findUnique(input);
    std::cout << unique << std::endl;
    return 0;
}