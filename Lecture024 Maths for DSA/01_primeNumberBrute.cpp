#include <iostream>
using namespace std;

bool isPrime(int n)
{
  // 1. return false if n is 1 or less than 1
  if (n <= 1)
  {
    return false;
  }

  // 2. Iterate over all the numbers from 2 to n-1
  for (int i = 2; i * i <= n; i++)
  {
    // 3. If n is divisible by any number from 2 to n-1, return false
    if (n % i == 0)
    {
      return false;
    }
  }

  // 4. If n is not divisible by any number from 2 to n-1, return true
  return true;
}

int main()
{
  // Check if a number is prime or not
  int n = 4;

  if (isPrime(n))
  {
    cout << n << " is a Prime Number" << endl;
  }
  else
  {
    cout << n << " is not a Prime Number" << endl;
  }

  return 0;
}