#include <string>
#include <variant>
#include <cassert>
#include <iostream>

int main()
{
  std::variant<int, float, std::string> value{10.3f};
  assert(std::holds_alternative<float>(value));
  
  // cast auf int
  int number = std::get<float>(value);	
  std::cout << "gecastetes ding: " << number << std::endl;

  if (auto* p = std::get_if<std::string>(&value))
  {
    std::cout << "String output" << std::endl;	  
  }
  else if(auto* p = std::get_if<int>(&value)) {
    std::cout << "Int output" << std::endl;	  
  }
  else {
    std::cout << "Float output" << std::endl;
  }
}
