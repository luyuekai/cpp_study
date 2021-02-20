#include "string.h"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const String& str) {
  os << str.get_c_str();
  return os;
}

int main() {
  String s1("hello");
  String s2("world");
  String s3(s2);
  String s4 = s2;

  std::cout << s1 << std::endl;
  std::cout << s2 << std::endl;
  std::cout << s3 << std::endl;
  std::cout << s4 << std::endl;
  std::cout << &s1 << std::endl;
  std::cout << &s2 << std::endl;
  std::cout << &s3 << std::endl;
  std::cout << &s4 << std::endl;
}