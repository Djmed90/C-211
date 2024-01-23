#include<iostream>

void all_to(char str[], bool Capital) {

    for (int i = 0; str[i] != '\0'; i++) {

        char currentChar = str[i];

        if (currentChar >= 'a' && currentChar <= 'z' && !Capital) {

            str[i] = currentChar - ('a' - 'A');
        } else if (currentChar >= 'A' && currentChar <= 'Z' && !Capital) {

            str[i] = currentChar + ('a' - 'A'); // Convert to lowercase
        }
    }
}

int main() {

    int maxStringLength = 100;

    char myString[maxStringLength];

    bool Capital;

    std::cin.getline(myString, maxStringLength);

    std::cin >> Capital;

    all_to(myString, Capital);

    std::cout << myString << std::endl;

    return 0;
}


// This program is 90% right only problem is that "that will change all of the characters in the str parameter to their uppercase
// equivalent if caps is True or change all of the character in str to their lowercase equivalent if caps is False."
// So if u look at terminal if I put true all of the letters should be cap but what u have it doing is swapping
// So ur code is not using the true/false bool ........ its an easy fix just need to add if statements that say if( bool == true)
// Then if lowercase make uppercase ---- THen if uppercase leave it and then reverse this for the other bool of false