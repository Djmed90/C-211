#include <iostream>


int main() {

  int n;
  bool prime = true;

  std::cin >> n;
  if (n == 0 || n == 1) {
    prime = false;
  }
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      prime = false;
      break;
    }
  }
  if (prime)
    std::cout << "True" << std::endl;
  else
    std::cout << "False" << std::endl;

  return 0;

}