// H=OK so how you do is find where the www is located start there at first www. then continue until you reach the first /
// WIth this you then ake new string that contains www.hello.com and boom your website link!!
#include <iostream>
#include <string>

int findLeft(const std::string& input){
    int left = 0;
    for (int i = 0; i < input.length(); ++i){
        if(input[i] =='/'){
            left = i + 2;
            break;
        }
        else if(input[i] == 'w'){
             left = i;
            break;
        }
    }
    return left;
}

int findRight(const std::string& input, int left){
    int right = 0;
    for(int i = left; i < input.length(); ++i){
        if(input[i] == '/' || input[i] == ':'){
            right = i;
            break;
        }
        else if(i == input.length() - 1){
            right = i + 1;
            break;
        }
    }
    return right;

}


std::string findDomain(const std::string& input){
    std::string domain;
    int left = findLeft(input);
    int right = findRight(input, left);
    for(int i = left; i < right; ++i){
        domain.push_back(input[i]);
    }

    return domain;
}

std::string convertLower(const std::string& domain){
    //Convert all to lowercase
    std::string lowerString = domain;
    for(char &c : lowerString){
        c = std::tolower(c);
    }
    return lowerString;
}
int main(){
    std::string input;
    std::getline(std::cin, input);
    std::string domain = findDomain(input);
    std::string lowerString = convertLower(domain);
    std::cout << lowerString << std::endl;
    return 0;
}