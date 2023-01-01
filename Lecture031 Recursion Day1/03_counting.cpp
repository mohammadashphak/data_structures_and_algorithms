#include <iostream>
using namespace std;

void printOneToN(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive relation
    printOneToN(n - 1);

    cout << n << " ";
}

void printNToOne(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    cout << n << " ";

    // recursive relation
    printNToOne(n - 1);
}

int main()
{
    // print numbers from 1 to n & n to 1 using recursion
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printOneToN(n);

    cout << endl;

    printNToOne(n);

    return 0;
}