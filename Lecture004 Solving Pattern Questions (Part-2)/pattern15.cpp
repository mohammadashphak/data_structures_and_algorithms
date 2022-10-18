#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  A
  B C
  C D E
  D E F G
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;

  while (row <= n)
  {
    int col = 1;
    char count = 'A' + row - 1;
    while (col <= row)
    {
      cout << count << " ";
      col++;
      count++;
    }
    cout << endl;
    row++;
  }
  
  return 0;
}