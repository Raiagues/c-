#include <iostream>
int main() {
  // Size of variables or types
  std::cout << sizeof(int);
  
  // Type signed and unsigned
  signed int test1 {-1};
  // unsigned int test2 {-1}; // compiler error
  std::cout << test1 << std::endl;

  // Characters
  char a_char {'A'};
  char a_int {65};
  std::cout << "char: " << a_char << std::endl 
            << "int: " << a_int << std::endl
            << "int: " << static_cast<int>(a_int) << std::endl;
  
  // Print boolean variables
  bool var_bool {false};
  std::cout << std::boolalpha;
  std::cout << var_bool << std::endl;
  
  // Operations
  int value = 5;
  --value;
  std::cout << value << std::endl;
  return 0; 
}