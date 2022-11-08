#include <iostream>
using namespace std;

int catalanNumber(int n)
{
  int catalan[n + 1];

  // 1. Initialize the first two values in array
  catalan[0] = 1;
  catalan[1] = 1;

  // 2. Iterate over the array
  for (int i = 2; i <= n; i++)
  {
    catalan[i] = 0;
    for (int j = 0; j < i; j++)
    {
      catalan[i] += catalan[j] * catalan[i - j - 1];
    }
  }
  return catalan[n];
}

int main()
{
  // Catalan Number
  /*
  Catalan numbers are defined as a mathematical sequence that consists of positive integers, which can be used to find the number of possibilities of various combinations.
  1. C0 = 1
  2. Cn+1 = sum of C(i) * C(n-i) for i = 0 to n
  or Cn+1 = 2(2n+1)/(n+2) * Cn

  Catalan numbers occur in many interesting counting problems like the following.
  1. Count the number of expressions containing n pairs of parentheses which are correctly matched. For n = 3, possible expressions are ((())), ()(()), ()()(), (())(), (()()).
  2. Count the number of possible Binary Search Trees with n keys (See this)
  3. Count the number of full binary trees (A rooted binary tree is full if every vertex has either two children or no children) with n+1 leaves.
  4. Given a number n, return the number of ways you can draw n chords in a circle with 2 x n points such that no 2 chords intersect.
  */

  // find nth catalan number
  int n = 6;
  int catalan[n + 1];
  cout << catalanNumber(n) << endl;

  return 0;
}