#include <iostream>


int main() {
	char letter;
	std :: cout << "Enter Letter" ;
	std :: cin >> letter ;
	if(letter>='A' && letter <='Z'){
		std:: cout << "Upper Case" << std :: endl;
	} else if (letter >= 'a' && letter <='z'){
		std::cout<< "lower case" <<std:: endl;
	}
	return 0;
}