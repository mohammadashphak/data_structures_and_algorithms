#include <iostream>
using namespace std;

int fastExpo(int a, int b)
{
  int res = 1;

  while (b > 0)
  {
    // if power is odd then multiply the result to number
    if (b & 1)
    {
      res = res * a;
    }

    // half the power and square the number
    b = b >> 1;
    a = a * a;
  }
  return res;
}

int main()
{
  // Fast Exponentiation
  /*
  Fast Exponentiation is a method to calculate a^b in O(logb) time.
  1. If b is even, then a^b = (a^2)^(b/2)
  2. If b is odd, then a^b = a * a^(b-1)
  3. repeat the above steps until b becomes 0
  */

  // find (a ^ b)
  int a = 3, b = 4;
  cout << "Answer is: " << fastExpo(a, b) << endl;

  return 0;
}