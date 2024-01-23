#include <iostream>

void replace(char str[], char a, char b){
    for(int i = 0; str[i] != '\0'; ++i){
         if(str[i] == a){
            str[i] = b;
        }



    }
    return;
}

int main(){
    char myString[100];
    char a;
    char b;
    std::cin.getline(myString, sizeof(myString));
    std::cin >> a >> b;

    replace(myString, a, b);
    std::cout << myString << std::endl;
    return 0;
}