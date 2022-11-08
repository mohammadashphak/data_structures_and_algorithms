#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  // 1. if a or b is 0 then return other variable
  if (a == 0)
    return b;

  if (b == 0)
    return a;

  // 2. If we subtract a smaller number from a larger one (we reduce a larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
    }
    else
    {
      b = b - a;
    }
  }
  return a;
}

int main()
{
  // Euclid’s GCD Algorithm
  /*
  1. If a or b is 0 then return other variable
  2. If we subtract a smaller number from a larger one (we reduce a larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
  */

  int a = 3, b = 6;
  cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

  return 0;
}