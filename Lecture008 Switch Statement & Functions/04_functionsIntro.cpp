#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Power(a, b)
    int a, b, result;

    // First Time
    cout << "Enter two numbers: ";
    cin >> a >> b;

    result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }

    cout << a << " to the power " << b << " is: " << result << endl;

    // Second Time
    cout << "Enter two numbers: ";
    cin >> a >> b;

    result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }

    cout << a << " to the power " << b << " is: " << result << endl;

    // Third Time
    cout << "Enter two numbers: ";
    cin >> a >> b;

    result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }

    cout << a << " to the power " << b << " is: " << result << endl;

    return 0;
}