#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Data Types and variables
  /*
  // Rules for naming variables
  // 1. No spaces
  // 2. No special characters except underscore
  // 3. No keywords
  // 4. No numbers at the beginning
  // 5. No reserved words

  // Data Types
  int i = 4;
  float f = 45.56;
  char c = 'd';
  bool b = 0;
  double d = 34.4;
  long l = 34343434;
  short s = 4;
  long double ld = 45.45;

  cout << "The value of i is " << i << endl;
  cout << "The value of f is " << f << endl;
  cout << "The value of c is " << c << endl;
  cout << "The value of b is " << b << endl;
  cout << "The value of d is " << d << endl;
  cout << "The value of l is " << l << endl;
  cout << "The value of s is " << s << endl;
  cout << "The value of ld is " << ld << endl;

  int size = sizeof(d);
  cout << "Size of a is " << size << endl;

  int a = 'a';
  cout << a << endl;

  char ch = 98;
  cout << ch << endl;

  char ch1 = 123456;
  cout << ch1 << endl; // will produce error because 123456 is greater than 1 byte
*/

  // Positive and Negative Numbers
  /*
  int a = -4;
  unsigned int b = 4;
  cout << "The value of a is " << a << endl;
  cout << "The value of b is " << b << endl;

  b = -4;
  cout << "The value of b is " << b << endl; // will take its 2's complement and take it as a positive number
  */

  // Typecasting
  /*
  int a = 45;
  float b = 45.45;

  cout << "The value of a is " << (float)a << endl;
  cout << "The value of b is " << (int)b << endl;

  int c = 2/5;
  cout << "The value of c is " << c << endl;

  int d = 2.0/5;
  cout << "The value of d is " << d << endl;

  float e = 2.0/5;
  cout << "The value of e is " << e << endl;
  */

  // Arithmetic Operators
  /*
  int a = 2;
  int b = 3;
  cout << "The value of a + b is " << a + b << endl;
  cout << "The value of a - b is " << a - b << endl;
  cout << "The value of a * b is " << a * b << endl;
  cout << "The value of a / b is " << a / b << endl;
  cout << "The value of a % b is " << a % b << endl;
  */

  // Relational Operators
  /*
  int a = 2;
  int b = 3;

  cout << (a == b) << endl;
  cout << (a != b) << endl;
  cout << (a > b) << endl;
  cout << (a < b) << endl;
  cout << (a >= b) << endl;
  cout << (a <= b) << endl;
  */

  // Assignment Operators
  /*
  int c = 34;
  c += 2;
  cout << c << endl;

  c -= 2;
  cout << c << endl;

  c *= 2;
  cout << c << endl;

  c /= 2;
  cout << c << endl;

  c %= 2;
  cout << c << endl;
`;*/

  // Logical Operators
  /*
  int x = 4;
  int y = 5;
  cout << (x < 5 && y > 5) << endl;
  cout << (x < 5 || y > 5) << endl;
  cout << !(x < 5) << endl;
  */

  // Increment and Decrement Operators
  /*
  int p = 34;
  int q = p++;
  cout << p << " " << q << endl;

  Post Increment: First assign the value and then increment
  Pre Increment: First increment and then assign the value

  int p = 34;
  int q = ++p;
  cout <<"Pre Increment: p = " << p << " and q = " << q << endl;

  q = p++;
  cout <<"Post Increment p = " << p << " and q = " << q << endl;

  Post Decrement: First assign the value and then decrement
  Pre Decrement: First decrement and then assign the value

  int p = 34;
  int q = --p;
  cout <<"Pre Decrement: p = " << p << " and q = " << q << endl;

  q = p--;
  cout <<"Post Decrement p = " << p << " and q = " << q << endl;
  */

  return 0;
}