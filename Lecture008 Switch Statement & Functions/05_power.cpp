#include <iostream>
using namespace std;

// Function to calculate power
int power()
{
    int a, b, result = 1;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }

    cout << a << " to the power " << b << " is: " << result << endl;

    return result;
}

int main()
{
    int a, b, result;

    // First Time
    power();

    // Second Time
    power();

    // Third Time
    power();

    return 0;
}