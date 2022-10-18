#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  1
  2 3
  4 5 6
  7 8 9 10
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  int count = 1;
  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
      cout << count << " ";
      count++;
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}