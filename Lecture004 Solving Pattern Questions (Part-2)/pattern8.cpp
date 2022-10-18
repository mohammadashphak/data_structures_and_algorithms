#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Print pattern
  /*
  1
  2 3
  3 4 5
  4 5 6 7
  */

  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int row = 1;
  while (row <= n)
  {
    int col = 1;
    int count = row;
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