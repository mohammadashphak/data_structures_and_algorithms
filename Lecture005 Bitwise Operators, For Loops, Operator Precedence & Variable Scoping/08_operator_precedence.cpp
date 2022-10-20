#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Operator Precedence
  // Operator Precedence is the order in which operators are evaluated.
  // For example, in the expression 2 + 3 * 4, the multiplication operator has a higher precedence than the addition operator.
  // So, the expression is evaluated as 2 + (3 * 4) = 14.

  // Associativity is the order in which operators of the same precedence are evaluated.
  // For example, in the expression 2 + 3 + 4, the addition operator has a left-to-right associativity.
  // So, the expression is evaluated as (2 + 3) + 4 = 9.

  // The precedence of the operators is as follows:
  /*
    Precedence                       Associativity
    1. () [] -> .                    Left to Right
    2. ++ -- ~ ! (type) * & sizeof   Left to Right
    3. * / %                         Left to Right
    4. + -                           Left to Right
    5. << >>                         Left to Right
    6. < <= > >=                     Left to Right
    7. == !=                         Left to Right
    8. &                             Left to Right
    9. ^                             Left to Right
    10. |                            Left to Right
    11. &&                           Left to Right
    12. ||                           Left to Right
    13. ?:                           Right to Left
    14. = += -= *= /= %= &= ^= |=    Right to Left
    15. ,                            Left to Right
  */
 
  int a = 3, b = 2;
  int c = a * b - 1;
  cout << c << endl;

  return 0;
}