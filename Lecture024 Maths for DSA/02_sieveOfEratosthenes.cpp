#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int countPrimes(int n)
  {
    // 1. Create a boolean array of size n
    vector<bool> prime(n, true);

    // 2. Mark 0 and 1 as non-prime
    prime[0] = prime[1] = false;

    // 3. Iterate over the array
    for (int i = 2; i * i < n; i++)
    {
      if (prime[i])
      {
        // 4. Mark all multiples of i as non-prime
        for (int j = i * i; j < n; j += i)
        {
          // start from square of i because all the previous multiples of i would have been marked as false
          prime[j] = false;
        }
      }
    }

    // 5. Count the number of primes
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (prime[i])
      {
        count++;
      }
    }
    return count;
  }

  // Time Complexity: O(nlog(logn))
  // Space Complexity: O(n)
};

int main()
{
  // Sieve of Eratosthenes
  /*
  The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so.
  it works, for a given upper limit n the algorithm works by iteratively marking the multiples of primes as composite (i.e., not prime), starting from 2.
  */

  // Count all primes smaller than n
  int n = 10;
  Solution s;
  cout << s.countPrimes(n) << endl;
  return 0;
}