#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;

  while (row <= n)
  {
    int col = 1;
    // for printing spaces
    while (col <= n - row)
    {
      cout << "  ";
      col++;
    }
    
    // for printing first triangle
    col = 1;
    while (col <= row)
    {
      cout << col << " ";
      col++;
    }

    // for printing second triangle
    col = row - 1;
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