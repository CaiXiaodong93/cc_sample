#include "sample.h"
#include <iostream>
using namespace sample;

int main() {
  std::string input = "";
  std::string output;
  BaseClass *p = new BaseClass;
  p->function_one(input, &output);
  delete p;
  // BaseClass * p = new Child1Class;
  p = new Child1Class;
  p->function_one(input, &output);
  delete p;

  // BaseClass base;
  // base.function_one(input, &output);
  // Child1Class child1;
  // child1.function_one(input, &output);
  std::cout << "start first demo " << std::endl;
  return 0;
}