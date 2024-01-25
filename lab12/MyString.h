#ifndef __MYSTRING_H__
#define __MYSTRING_H__

class MyString {
    private:
        char *str;
        int index;


    public:
        // Default constructor; Should store an empty string.
        MyString();
        // Copy constructor; Copy the contents of the input string into the class's data member.
        MyString(const char *s);

        // Destructor; Should deallocate any dynamically allocated memory that the class uses.
        ~MyString(){
            delete[] str;
        };

        // Returns the length of string. This is the number of characters in the string,
        // excluding the null terminator.
        unsigned int len(){
            return strlen(str);
        };

        // Sets the character at the given index to the character provided
        void set(int index, char c){
            if(index >0 && index < len()){
                str[index] = c;
            }
        };

        // Returns the character at the given index.
        char get(int index){
            if(index >0 && index < len()){
                return str[index];
            }
        };

        // Returns a pointer to a character array of the object's string.
        const char *c_str(){
            return str;
        };

        // Reverse the string. "hello" should turn into "olleh".
        // If you would like a challenge try to do it in-place (cannot create another array).
        void reverse(){
            int start = 0;
            int end = len() - 1;

            while (start < end) {
            std::swap(str[start], str[end]);
            start++;
            end--;
        }
        };

        // Find the first occurrence of this character, and return the index.
        // Return `-1` if it can't be found.
        int find_first(char){
             for (int i = 0; i < len(); ++i) {
            if (str[i] == c) {
                return i;
            }
        }
        return -1; // Character not found
    }

        // Find the first occurrence of the input string.
        // Return the index of the starting character.
        // Return the `-1` if it can't be found.
        int find_first(const char *){
            const char *ptr = strstr(str, sub);
        if (ptr != nullptr) {
            return static_cast<int>(ptr - str);
        }
        return -1; // Substring not found
    }

    // Find the last occurrence of a character
    int find_last(char c) {
        for (int i = len() - 1; i >= 0; --i) {
            if (str[i] == c) {
                return i;
            }
        }
        return -1; // Character not found
        }

        // Find the last occurrence of this character, and return the index.
        // Return the `-1` if it can't be found.
        int find_last(char){
            const char *ptr = strstr(str, sub);
            int lastIdx = -1;
            while (ptr != nullptr) {
            lastIdx = static_cast<int>(ptr - str);
            ptr = strstr(ptr + 1, sub);
        }
        return lastIdx;
        }

        // Find the last occurrence of the input string.
        // Return the index of the starting character.
        // Return the `-1` if it can't be found.
        int find_last(const char *);

        // Return true if the str stored is equivalent to the given string
        // Return false if they are not the same
        bool compare(const char *){
            return strcmp(str, s) == 0;
        }

        // Append a single character onto the end of the string.
        void append(char){
            int oldLen = len();
            char *newStr = new char[oldLen + 2]; // One extra character for the appended character
            strcpy(newStr, str);
            newStr[oldLen] = c;
            newStr[oldLen + 1] = '\0'; // Ensure the new string is null-terminated
            delete[] str;
            str = newStr;
        }

        // Concatenate the input string to the object's string.
        void append(const char *){
            int oldLen = len();
            int appendLen = strlen(s);
            char *newStr = new char[oldLen + appendLen + 1];
            strcpy(newStr, str);
            strcpy(newStr + oldLen, s);
            delete[] str;
            str = newStr;
        }

        //Overload the '[]' operator to fuction as we expect
        // Ex. MyString("Hello")[2] == 'l'
        char operator[](const unsigned int index) const {
            return get(index);
        }

        // Overload the '+' operator to concatenate two strings together
        MyString operator+(const MyString str2) const {
            MyString result;
            result.append(str);
            result.append(str2.str);
            return result;
        }

        // Overload the '*' operator to return the string concatenated on itself x times
        // Ex. "Hello" * 3 == "HelloHelloHello"
        MyString operator*(const int x) const {
            MyString result;
        for (int i = 0; i < x; ++i) {
            result.append(str);
        }
        return result;
    }
        }

#endif