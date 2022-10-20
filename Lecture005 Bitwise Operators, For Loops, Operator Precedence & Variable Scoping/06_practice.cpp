#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Question 1
  for (int i = 0; i <= 5; i++)
  {
    cout << i << " ";
    i++;
  }

  // Question 2
  for (int i = 0; i <= 5; i--)
  {
    cout << i << " ";
    i++;
  } // This is an infinite loop because the condition is always true.

  // Question 3
  for (int i = 0; i <= 15; i += 2)
  {
    cout << i << " ";

    if (i & 1)
    {
      continue;
    }
  }

  // Question 4
  for (int i = 0; i < 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      cout << i << " " << j << endl;
    }
  }

  // Question 5
  for (int i = 0; i < 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      if (i + j == 10)
      {
        break;
      }
      cout << i << " " << j << endl;
    }
  }

  return 0;
}