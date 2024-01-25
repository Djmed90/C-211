#include <iostream>
#include <algorithm>
#include <string>

std::string backspace(const std::string& input){
    std::string output;
    int skip = 0;
    for(int i = input.length()-1; i >= 0; --i){
        if(skip > 0){
            skip -= 1;
        }
        if(input[i] == '<'){
            skip += 2;
        }
        if(skip == 0){
            output.push_back(input[i]);
        }
    }
    return output;
}

std::string rotate(const std::string& output){
    std::string temp;
    for(int i = output.length() - 1; i >= 0; --i){
            temp.push_back(output[i]);
    }
    return temp;

}
int main(){
    std::string input;
    std::getline(std::cin, input);
    std::string output = backspace(input);
    output = rotate(output);
    std::cout << output << std::endl;
}


// Hellol> woo>rld
// Hello world
// One idea is to workbackwards start from right and go left
// Upon hitting a > we do a counter until there is a normal letter once that happens we skip that one till counter ends
// then copy ot new string then rotate again Cool yes!