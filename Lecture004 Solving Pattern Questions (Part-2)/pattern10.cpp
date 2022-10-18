#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  A A A
  B B B
  C C C
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  while (row <= n)
  {
    int col = 1;
    while (col <= n)
    {
      cout << (char)('A' + row - 1) << " ";
      col++;
    }
    cout << endl;
    row++;
  }
  return 0;
}