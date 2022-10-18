#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
        1
      2 2
    3 3 3
  4 4 4 4
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
    
    // for printing numbers
    col = 1;
    while (col <= row)
    {
      cout << row << " ";
      col++;
    }
    cout << endl;
    row++;
  }
  
  return 0;
}