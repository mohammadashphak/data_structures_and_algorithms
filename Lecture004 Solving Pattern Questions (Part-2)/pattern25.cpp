#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  1 2 3 4 5 5 4 3 2 1
  1 2 3 4 * * 4 3 2 1
  1 2 3 * * * * 3 2 1
  1 2 * * * * * * 2 1
  1 * * * * * * * * 1
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;

  while (row <= n)
  {
    int col = 1;
    // for printing numbers
    while (col <= n - row + 1)
    {
      cout << col << " ";
      col++;
    }
    // for printing stars
    col = 1;
    while (col <= 2 * row - 2)
    {
      cout << "* ";
      col++;
    }
    // for printing numbers
    col = n - row + 1;
    while (col >= 1)
    {
      cout << col << " ";
      col--;
    }
    cout << endl;
    row++;
  }
  return 0;
}