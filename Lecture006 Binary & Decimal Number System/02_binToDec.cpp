#include <iostream>
#include <math.h>
using namespace std;

int main()
{

  int n;
  cout << "Enter a number: ";
  cin >> n;

  int i = 0, ans = 0;

  while (n != 0)
  {
    cout << "in while loop" << endl;

    int digit = n % 10;

    if (digit == 1)
    {
      ans += pow(2, i);
    }

    n = n / 10;
    i++;
  }
  cout << ans << endl;
  return 0;
}