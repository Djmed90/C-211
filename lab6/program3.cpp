#include <iostream>
#include <cstring>
unsigned int string_len(char str[]){
    unsigned int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

bool palindrome(char str[]){
    int length = string_len(str);
    char temp[length + 1];
    int j = 0;
    for(int i = length - 1; i >= 0 ; i--){
       temp[j++] = str[i];
        }
        
    temp[j] = '\0';

    return strcmp(str, temp)==0;
}

int main(){
    char myString[100];
    std::cin.getline(myString, sizeof(myString));
    if(palindrome(myString)){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    return 0;
}