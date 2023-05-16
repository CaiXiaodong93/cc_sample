#include "sample.h"
#include <iostream>

namespace sample {
bool BaseClass::function_one(const std::string& input, std::string* output) {
  std::cout << "base function one" << std::endl;
  return true;
}
bool Child1Class::function_one(const std::string& input, std::string* output) {
  std::cout << "child function one" << std::endl;
  return true;
}
}  // namespace sample