#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // For Loop
  /*
  for (int i = 0; i < 40; i++)
  {
    cout << i << endl;
  }

  for (int a = 0, b = 0; a < 40 && b < 50; a++, b++)
  {
    cout << a << " " << b << endl;
  }

  for (int a = 0, b = 0; a < 40, b < 50; a++, b++) // here comma between conditions is works as OR operator.
  {
    cout << a << " " << b << endl;
  }
  */

  // Other ways to write for loop
  /*
  int i = 0;
  for (;;)
  {
    if (i < 40)
    {
      cout << i << endl;
      i++;
    }
  }

  This is an infinite loop because the condition is always true.
  */

  // Break and Continue
  /*
  Break: Breaks the loop and exits the loop.
  Continue: Skips the current iteration and continues with the next iteration.

  int i = 0;
  for (;;)
  {
    if (i < 40)
    {
      cout << i << endl;
      i++;
    }
    else
    {
      break;
    }
  }

  for (int i = 0; i < 40; i++)
  {
    if (i == 2)
    {
      continue;
    }
    cout << i << endl;
  }
  */

  return 0;
}