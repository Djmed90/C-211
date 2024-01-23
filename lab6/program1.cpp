#include <iostream>


unsigned int string_len(char str[]){
    unsigned int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length - 1;
}

int main(){
    char myString[100];
    std::cin.getline(myString, sizeof(myString));


    unsigned int length = string_len(myString);
    std::cout << length << std::endl;
    return 0;
}