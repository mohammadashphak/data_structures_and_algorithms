#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
  vector<int> printPrimes(int n)
  {
    // This is the "Sieve of Eratosthenes" or "Simple Sieve of Eratosthenes" method
    /*
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
    vector<int> primes;
    for (int i = 0; i < n; i++)
    {
      if (prime[i])
      {
        primes.push_back(i);
      }
    }
    return primes;
    */

    // Problems with Simple Sieve:
    /*
    The Sieve of Eratosthenes looks good, but consider the situation when n is large, the Simple Sieve faces the following issues.
    1. An array of size O(n) may not fit in memory.
    2. The simple Sieve is not cached friendly even for slightly bigger n. The algorithm traverses the array without locality of reference.
    */

    // This is the "Segmented Sieve" method

    // 1. Compute all primes smaller than or equal to square root of n using simple sieve.
    int limit = floor(sqrt(n)) + 1;

    vector<bool> prime(limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < limit; i++)
    {
      if (prime[i])
      {
        for (int j = i * i; j < limit; j += i)
        {
          prime[j] = false;
        }
      }
    }

    // 2. Store found primes in a vector
    vector<int> primes;
    for (int i = 0; i < limit; i++)
    {
      if (prime[i])
      {
        primes.push_back(i);
      }
    }

    // 3. Divide the range [0, n-1] in different segments
    // We have chosen segment size as sqrt(n).
    int low = limit;
    int high = 2 * limit;

    // 4. While all segments of range [0, n-1] are not processed, process one segment at a time
    while (low < n)
    {
      if (high >= n)
      {
        high = n;
      }

      // 5. Mark all primes in current range as true
      vector<bool> mark(limit, true);

      // 6. Use the found primes by simple sieve to find primes in current range
      for (int i = 0; i < primes.size(); i++)
      {
        // Find the minimum number in [low, high] that is a multiple of prime[i] (divisible by prime[i])
        // For example, if low is 31 and prime[i] is 3, we start with 33.
        int loLim = floor(low / primes[i]) * primes[i];
        if (loLim < low)
        {
          loLim += primes[i];
        }

        /* Mark multiples of prime[i] in [low, high]:
        We are marking j - low for j, i.e. each number in range [low, high] is mapped to [0, high - low]
        so if range is [50, 100] marking 50 corresponds to marking 0, marking 51 corresponds to 1 and so on. */
        for (int j = loLim; j < high; j += primes[i])
        {
          mark[j - low] = false;
        }
      }

      // 7. Numbers which are not marked as false are prime
      for (int i = low; i < high; i++)
      {
        if (mark[i - low] == true)
        {
          primes.push_back(i);
        }
      }

      // 8. Update low and high for next segment
      low = low + limit;
      high = high + limit;
    }

    return primes;
  }
};

int main()
{
  // Segmented Sieve
  /*
  The idea of a segmented sieve is to divide the range [0, n-1] in different segments and compute primes in all segments one by one. This algorithm first uses Simple Sieve to find primes smaller than or equal to √(n).
  */

  // Print all primes smaller than n
  int n = 10;
  Solution s;
  vector<int> primes = s.printPrimes(n);
  for (int i = 0; i < primes.size(); i++)
  {
    cout << primes[i] << " ";
  }
  cout << endl;

  return 0;
}