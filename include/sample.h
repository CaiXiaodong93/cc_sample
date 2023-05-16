#pragma once
#include <string>

namespace sample {
class BaseClass {
 public:
  virtual bool function_one(const std::string &input, std::string *output);
};

class Child1Class:public BaseClass {
public:
bool function_one(const std::string &input, std::string *output);
};
}