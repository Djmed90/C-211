#include <iostream>

void reverse(char str[]) {


    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters from the beginning and end of the string
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}



int main(){
   char myString[100];

   std::cin.getline(myString,sizeof(myString));

   reverse(myString);

   std::cout<<myString<<std::endl;

   return 0;



}