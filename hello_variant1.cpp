#include <iostream>
#include <variant>
#include <string>

struct ausgabe
{
  void operator()(int x) { std::cout << x << " ist vom Typ int" << std::endl; }
  void operator()(double x) { std::cout << x << " ist vom Typ double" << std::endl; }
  void operator()(std::string x) { std::cout << x << " ist vom Typ std::string" << std::endl; }
};

//Ich sehe für mich eine neue Art für den Einsatz des Strategie Pattern :-)
int main()
{
  using something = std::variant<int, double, std::string>; 
  something my_int{30}; 
  something my_double{3.14}; 
  something my_string{"test"};
  std::visit(ausgabe{}, my_int); 
  std::visit(ausgabe{}, my_double); 
  std::visit(ausgabe{}, my_string); 
}
