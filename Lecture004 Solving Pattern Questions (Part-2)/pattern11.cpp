#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  A B C D
  A B C D
  A B C D
  A B C D
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
      cout << (char)('A' + col - 1) << " ";
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}