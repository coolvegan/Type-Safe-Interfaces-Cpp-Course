#include <iostream>
#include <variant>
#include <string>

int main()
{
  std::variant<int, float, std::string> data{40};
  //Lamba Expression
  //Implementierung des Beispiels von Modul vier des
  //Udemy Kurses
  std::visit([](auto x) {
    if constexpr(std::is_same_v<decltype(x), int>){
	std::cout << "Ausgabe von int: " << x << std::endl;
    }    
    
    else if constexpr(std::is_same_v<decltype(x), float>){
	std::cout << "Ausgabe von float: " << x << std::endl;
    }	  

    else if constexpr(std::is_same_v<decltype(x), std::string>){
	std::cout << "Ausgabe von std::string: " << x << std::endl;
    }	  
		  
  }, data);
}
