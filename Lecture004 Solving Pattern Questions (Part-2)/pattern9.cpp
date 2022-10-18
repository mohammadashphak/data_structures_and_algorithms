#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  1
  2 1
  3 2 1
  4 3 2 1
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  while (row <= n)
  {
    int col = row;
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