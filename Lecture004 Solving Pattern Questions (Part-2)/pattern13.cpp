#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  A
  B B
  C C C
  D D D D
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
      cout << (char)('A' + row - 1) << " ";
      col++;
    }
    cout << endl;
    row++;
  }
  return 0;
}