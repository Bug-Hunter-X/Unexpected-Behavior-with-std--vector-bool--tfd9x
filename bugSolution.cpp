#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  vec.push_back(1); // true
  vec.push_back(0); // false
  bool b = vec[0] != 0; // This works fine
  b = vec[1] != 0;     // This works fine
  std::cout << "vec[0]: " << b << std::endl;
  std::cout << "vec[1]: " << b << std::endl;
  return 0;
} 