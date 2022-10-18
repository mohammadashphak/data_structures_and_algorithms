#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  D
  C D
  B C D
  A B C D
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;

  while (row <= n)
  {
    int col = 1;
    char count = 'A' + n - row;
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