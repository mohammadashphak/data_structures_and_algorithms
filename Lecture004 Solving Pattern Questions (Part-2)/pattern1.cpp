#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
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
      cout << col << " ";
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}