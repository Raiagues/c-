#include <iostream>
#include <limits>

int calcResult (int val1, int val2) {
  std::clog << "We are inside the function, adding val 1 to val 2 and returning the result" << std::endl;
  return val1 + val2;
}

int main() {
  int value1, value2;
  std::cout << "Type the first value : ";
  std::cin >> value1;
  std::cout << "Type the second value : ";
  std::cin >> value2;
  int result = calcResult(value2, value1);
  if (result == 0) {
    std::cerr << "The result is 0" << std::endl; 
  }
  std::cout << value1 << " + " << value2 << " = " << result << std::endl;

  std::string name, full_name;
  std::cout << "Type your first name : " << std::endl;
  std::cin >> name;
  std::cout << "Your first name is: " << name << std::endl;

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "Now type your full name : " << std::endl;
  std::getline(std::cin, full_name);

  std::cout << "Your full name is: " << full_name << std::endl;

  std::string test1, test2;
  std::cout << "Write your name and surname" << std::endl;
  std::cin >> test1 >> test2;
  std::cout << "Your name is: " << test1 << 
               " and your surname is: " << test2 << std::endl;
  
  return 0;
}