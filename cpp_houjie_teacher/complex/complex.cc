#include "complex.h"
#include <iostream>

int main() {
  complex c1(1, 2);
  complex c2(2, 3);

  std::cout << "c1+=c2: " << (c1 += c2).to_string();
  std::cout << "c1-=c2: " << (c1 -= c2).to_string();
  std::cout << "c1*=c2: " << (c1 *= c2).to_string();
}