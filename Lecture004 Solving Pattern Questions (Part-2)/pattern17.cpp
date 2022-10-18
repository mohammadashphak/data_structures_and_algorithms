#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
        *
      * *
    * * *
  * * * *
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
    
    // for printing stars
    col = 1;
    while (col <= row)
    {
      cout << "* ";
      col++;
    }
    cout << endl;
    row++;
  }
  return 0;
}