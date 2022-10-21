#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
  // Decimal to Binary
  int n;
  cout << "Enter a binary number: ";
  cin >> n;

  unsigned long long ans = 0;
  int i = 0;

  if (n >= 0)
  {

    while (n != 0)
    {
      int bit = n & 1;

      ans += (bit * pow(10, i));

      n = n >> 1;
      i++;
    }

    cout << "Answer is " << ans << endl;
  }
  else
  {
    int flag = 1;
    int tempAns = 0;
    n = n * (-1);
    int ansArray[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (n != 0)
    {
      int bit = n & 1;

      if (flag == 0)
      {
        bit = !bit;
      }

      if (bit == 1)
      {
        flag = 0;
      }
      
      ansArray[31 - i] = !bit;

      n = n >> 1;
      i++;
    }

    i = 0;

    cout << "Amswer is ";
    while (i <= 31)
    {
      cout << !ansArray[i];
      ans = ans * 10 + !ansArray[i];
      i++;
    }
  }

  return 0;
}