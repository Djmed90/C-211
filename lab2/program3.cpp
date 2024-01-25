#include <iostream>

int main() {

  int n;
  bool is_prime = true;

  std::cout << "Enter a positive integer: ";
  std::cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    std::cout << n << " is a prime number";
  else
    std::cout << n << " is not a prime number";

  return 0;
}

