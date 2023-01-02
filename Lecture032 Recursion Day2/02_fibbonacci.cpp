#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    // fibbonacci series using recursion
    int n;
    cout << "Enter n: ";
    cin >> n;

    int ans = fib(n);
    cout << n << "th fibbonacci number is " << ans << endl;

    return 0;
}