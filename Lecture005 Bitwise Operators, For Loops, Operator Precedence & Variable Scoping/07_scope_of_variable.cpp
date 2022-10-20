#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Scope of variables
  /*
  1. Scope of a variable is the region of the program where the variable is accessible.
  2. Scope of a variable is defined by the block in which it is declared.
  3. A block is a set of statements enclosed in curly braces.
  4. A block can be nested inside another block.
  5. A variable declared inside a block is accessible only inside that block.
  6. A variable declared inside a block is not accessible outside that block.
  7. A variable declared outside a block is accessible inside that block.
  */

  int a = 10;
  int b = 20;
  int c = 30;

  cout << "outside of the block" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << endl;

  {
    cout << "inside the block" << endl;

    cout << "before the declaration" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;

    int a = 100;
    int b = 200;
    int c = 300;

    cout << "after the declaration" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;
  }

  cout << "outside of the block" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;

  return 0;
}