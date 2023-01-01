#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    return n * factorial(n - 1);

    //   factorial(4)
    //   => 4 * factorial(3)
    //     => 4 * (3 * factorial(2))
    //       => 4 * (3 * (2 * factorial(1)))
    //         => 4 * (3 * (2 * (1 * factorial(0))))
    //           => 4 * (3 * (2 * (1 * 1)))
    //           => 24
}

int main()
{
    // Factorial of a number using recursion

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of " << n << " is " << ans << endl;

    return 0;
}