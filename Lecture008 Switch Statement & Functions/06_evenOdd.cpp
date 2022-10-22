#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n & 1)
    {
        return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    // Even or Odd
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (isEven(a))
    {
        cout << a << " is even" << endl;
    }
    else
    {
        cout << a << " is odd" << endl;
    }

    return 0;
}