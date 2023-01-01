#include <iostream>
using namespace std;

int powerOfTwo(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    return 2 * powerOfTwo(n - 1);
}

int main()
{
    // Power of 2 using recursion

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = powerOfTwo(n);

    cout << "2 raised to the power " << n << " = " << ans << endl;

    return 0;
}