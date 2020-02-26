#include <iostream>
#include <optional>

struct Kunde{
  std::string vorname;
  std::string name;
  std::optional<bool> premium;
  std::optional<std::string> telefonnummer;
  void print(){
    std::string puser = (premium.value() == true) ? "Premiumkunde" : "Generischer Kunde";
    std::cout << vorname << " " << name << ", " << puser << ", " << telefonnummer.value_or("Telefonnummer nicht hinterlegt") << std::endl;
  }
};

int main()
{
  Kunde kunde{"Erich", "Fromm", false}; 
  kunde.print();
  Kunde kunde2{"Lucky", "Luke", true, "0144/388448"};
  kunde2.print();
}
