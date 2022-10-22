#include <iostream>
using namespace std;

// Function to give nth term of a fibonacci series
int nthTerm(int n)
{
    int a = 0;
    int b = 1;
    int c;
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th term of the fibonacci series is " << nthTerm(n) << endl;
    return 0;
}