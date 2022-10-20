#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  if (n == 1)
  {
    cout << "The number is neither prime nor composite" << endl;
  }
  else
  {
    bool isPrime = true;
    if (n <= 0)
    {
      isPrime = false;
    }
    else
    {
      for (int i = 2; i < n; i++)
      {
        if (n % i == 0)
        {
          cout << "The number is composite" << endl;
          isPrime = false;
          break;
        }
      }
    }

    if (isPrime == true)
    {
      cout << "The number is prime" << endl;
    }
  }
  return 0;
}