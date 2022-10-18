#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  4 3 2 1
  4 3 2 1
  4 3 2 1
  4 3 2 1
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  while (row <= n)
  {
    int col = n;
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