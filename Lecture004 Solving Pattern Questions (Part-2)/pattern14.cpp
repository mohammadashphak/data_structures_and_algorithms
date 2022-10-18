#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  A
  B C
  D E F
  G H I J
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  char count = 'A';

  while (row <= n)
  {
    int col = 1;
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