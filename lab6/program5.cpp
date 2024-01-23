#include <iostream>

#include <string>

void all_to(char str[], bool Capital) {

    for (int i = 0; str[i] != '\0'; i++) {

        char currentChar = str[i];

        if (Capital) {

            if (currentChar >= 'a' && currentChar <= 'z') {

                str[i] = currentChar - ('a' - 'A');
            }

        } else {

            if (currentChar >= 'A' && currentChar <= 'Z') {

                str[i] = currentChar + ('a' - 'A');
            }
        }
    }
}

int main() {

    int maxStringLength = 100;

    char myString[maxStringLength];

    std::string input;

    bool Capital;

    std::cin.getline(myString, maxStringLength);\

    std::cin >> input;


    for (char& c : input) {

        c = std::tolower(c);
    }

    Capital = (input == "true");

    all_to(myString, Capital);

    std::cout << myString << std::endl;

    return 0;
}