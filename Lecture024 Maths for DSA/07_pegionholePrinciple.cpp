#include <iostream>
using namespace std;

int main()
{
  // Pegionhole Principle
  /*
  Pegionhole Principle states that if n items are put into m containers, with n > m, then at least one container must contain more than one item.

  1. If n pegions are put into m holes, with n > m, then at least one hole must contain more than one pegion.
  2. If n pegions are put into m holes, with n <= m, then no hole can contain more than one pegion.

  If m = Kn+ 1 (where k is a positive integer) pigeons are distributed among n holes than some hole contains at least k + 1 pigeons.
  */

  // Q. Find the minimum number of students in a class to be sure that three of them are born in the same month.
  int n = 12;
  int condition = 3;
  int k = condition - 1; // because k + 1 = condition

  int m = k * n + 1;

  cout << "Minimum number of students in a class to be sure that three of them are born in the same month is: " << m << endl;

  return 0;
}