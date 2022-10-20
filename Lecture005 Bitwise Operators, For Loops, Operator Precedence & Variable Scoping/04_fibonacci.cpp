#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Fibonacci Series
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  int a = 0;
  int b = 1;
  int c;

  cout << a << ", " << b;

  for (int i = 0; i < n - 2; i++)
  {
    c = a + b;
    cout << ", " << c;
    a = b;
    b = c;
  }
  return 0;
}