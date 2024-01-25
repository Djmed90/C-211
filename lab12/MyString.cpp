#include <iostream>
#include <cstring>
#include <vector>
#include "myString.h"



// Default Constructor
MyString::MyString() {
}

// Copy constructor; Copy the contents of the input string into the class's data member.

MyString::MyString(const char * var) {

    int length = strlen(var);

    for(int i = 0; i < length; i++){

        str.push_back(var[i]);

    }
}

// Destructor; Should deallocate any dynamically allocated memory that the class uses.

MyString::~MyString() {

    str.clear();
}

// Returns the length of string. This is the number of characters in the string,

// excluding the null terminator.

unsigned int MyString::len() {

    return str.size();
}


// Sets the character at the given index to the character provided

void MyString::set(int index, char var) {

    str[index] = var;

    return;
}

// Returns the character at the given index.

char MyString::get(int i){

    return str[i];
}

// Returns a pointer to a character array of the object's string.

const char *MyString::c_str() {

    return 0;
}

// Reverse the string. "hello" should turn into "olleh".
// If you would like a challenge try to do it in-place (cannot create another array).

void MyString::reverse() {

    int n = str.size();
    for(int i = 0; i < n/2; i++){

         std::swap(str[i], str[n-i-1]);

    }

   return;
}

// Find the first occurrence of this character, and return the index.
// Return `-1` if it can't be found.

int MyString::find_first(char var) {

    int count = 0;

    while (count < str.size()){
        if (str[count] == var){
            return count;
        }
        count++;
    }

    return -1;
}

// Find the first occurrence of the input string.
// Return the index of the starting character.
// Return the `-1` if it can't be found.

int MyString::find_first(const char *ptr) {

    int count = 0, ptrLength = strlen(ptr);

    while((count + ptrLength) < str.size()){

        if(ptr[count] == str[0]){

            for(int i = 1; i < ptrLength; i++){

                if(str[count + i] != ptr[i]){

                    break;
                }
            }

            return count;
        }

        count++;
    }

    return -1;
}

// Find the last occurrence of this character, and return the index.
// Return the `-1` if it can't be found.

int MyString::find_last(char var) {
    int x = str.size(), temp = -1;
    for(int i = 0; i < x; i++){
        if(str[i] == var){
            temp = i;
        }
    }
    return temp;
}

// Find the last occurrence of the input string.
// Return the index of the starting character.
// Return the `-1` if it can't be found.
int MyString::find_last(const char *ptr) {

    int last = 0, ptrLength = strlen(ptr);

    while((last + ptrLength) < str.size()){

        if(ptr[last] == str[0])
        {
            for(int i = ptrLength-1; i >= 0 ; i--){

                if(str[last + i] != ptr[i]){

                    break;
                }

                if(i == 0){

                    return last;
                }
            }
        }

        last++;
    }

    return -1;
}


// Return true if the str stored is equivalent to the given string
// Return false if they are not the same
bool MyString::compare(const char *ptr) {

    int count = 0;

    while(count < str.size()){

        if(ptr[count] != str[count]){

            return false;
        }

        count++;
    }


    return true;
}

// Append a single character onto the end of the string.
void MyString::append(char var) {

    int i = str.size();

    str[i] = var;

    return;
}

// Concatenate the input string to the object's string.

void MyString::append(const char *ptr) {

    int length = strlen(ptr);

    for(int i = 0; i < length; i++){

        str.push_back(ptr[i]);

    }

    return;
}





//Overload the '[]' operator to fuction as we expect
// Ex. MyString("Hello")[2] == 'l'
char MyString::operator[](const unsigned int index) const {

    return str[index];
}

// Overload the '+' operator to concatenate the two strings together
std::vector<char> MyString::operator+(const MyString str2) const {

    int length = strlen(str2);

    for(int i = 0; i < length; i++){

        str.push_back(str2[i]);

    }

    return str;
}

// Overload the '*' operator to return the string concatenated on itself x times
// Ex. "Hello" * 3 == "HelloHelloHello"
void MyString::operator*(const int x) const {

    std::vector<char> addition;

    for(int i = 0; i < str.size(); i++){

        addition.push_back(str[i]);
    }

    for(int i = 0; i < x; i++){

        for(int j = 0; i < addition.size(); i++){

            str.push_back(addition[i]);
        }
    }

    return;
}