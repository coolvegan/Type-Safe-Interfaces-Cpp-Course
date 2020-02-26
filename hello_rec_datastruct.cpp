#include <iostream>
#include <variant>
#include <string>

using number = int;

struct plus {};
struct minus {};
struct expr;

using op = std::variant<plus, minus>;
using r_expr = std::tuple<number, op, expr>;


struct expr 
{
  std::variant<number, std::unique_ptr<r_expr>> _data;
};

int main()
{
  expr e0{5};
}
