#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  1 2 3 4
    2 3 4
      3 4
        4
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  while (row <= n)
  {
    int col = 1;
    // for printing spaces
    while (col <= row - 1)
    {
      cout << "  ";
      col++;
    }
    
    // for printing numbers
    col = 1;
    while (col <= n - row + 1)
    {
      cout << col + row - 1 << " ";
      col++;
    }
    cout << endl;
    row++;
  }
  
  return 0;
}