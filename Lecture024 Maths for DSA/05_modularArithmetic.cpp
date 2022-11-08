#include <iostream>
#include <math.h>
using namespace std;

int modulo(int x, int y)
{
  int r = x % y;
  if (r < 0)
    r += y;
  return r;

  // other way
  // int r = x - (x/y)*y;
  // if (r < 0)
  //     r += y;
  // return r;
}

int factorial(int n, int p)
{
  int res = 1;
  for (int i = 1; i <= n; i++)
  {
    res = modulo(modulo(res, p) * modulo(i, p), p);
  }
  return res;
}

int main()
{
  // Modular Arithmetic
  /*
  Modular arithmetic is a system of arithmetic for integers, where numbers "wrap around" when reaching a certain value, called the modulus.
  It is used for computational purposes, such as in computer programming, where the processor's word size may be less than the word size of the programming language.

  1. Addition
  (a + b) % m = ((a % m) + (b % m)) % m

  2. Subtraction
  (a - b) % m = ((a % m) - (b % m)) % m

  3. Multiplication
  (a * b) % m = ((a % m) * (b % m)) % m

  4. Division
  (a / b) % m = ((a % m) / (b % m)) % m
  */

  /*
  int a = 11;
  int b = 7;
  int m = 10;

  // 1. Addition
  // a + b (mod m) = (a mod m) + (b mod m) (mod m)
  cout << "a + b (mod m) = " << modulo(a + b, m) << endl;
  cout << "(a mod m) + (b mod m) (mod m) = " << modulo(modulo(a, m) + modulo(b, m), m) << endl;

  // 2. Subtraction
  // a - b (mod m) = (a mod m) - (b mod m) (mod m)
  cout << "a - b (mod m) = " << modulo(a - b, m) << endl;
  cout << "(a mod m) - (b mod m) (mod m) = " << modulo(modulo(a, m) - modulo(b, m), m) << endl;

  // 3. Multiplication
  // a * b (mod m) = (a mod m) * (b mod m) (mod m)
  cout << "a * b (mod m) = " << modulo(a * b, m) << endl;
  cout << "(a mod m) * (b mod m) (mod m) = " << modulo(modulo(a, m) * modulo(b, m), m) << endl;

  // 4. Division
  // a / b (mod m) = a * b^-1 (mod m)
  cout << "a / b (mod m) = " << modulo(a / b, m) << endl;
  cout << "a * b^-1 (mod m) = " << modulo(a * pow(b, -1), m) << endl;
  */

  // Factorial of a number using modular arithmetic under modulo p
  int n = 5;
  int p = 13;

  cout << "Factorial of " << n << " under modulo " << p << " is " << factorial(n, p) << endl;
  return 0;
}