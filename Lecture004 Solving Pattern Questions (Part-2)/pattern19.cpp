#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  * * * *
    * * *
      * *
        *
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
    
    // for printing stars
    col = 1;
    while (col <= n - row + 1)
    {
      cout << "* ";
      col++;
    }
    cout << endl;
    row++;
  }
   
  return 0;
}