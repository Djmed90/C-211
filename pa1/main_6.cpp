#include <iostream>

int main() {
  // Create a variable
  int number;

  std::cin >> number;

  if (number > 0){std::cout << number << " is positive";}
  else if(number == 0){std::cout << number << " is neither a posisitve nor negative";}
  else {std::cout << number << " is negative";}

  return 0;
}