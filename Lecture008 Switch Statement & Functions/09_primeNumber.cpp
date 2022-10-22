#include <iostream>
using namespace std;

// Function to check if a number is prime or not
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    // Prime Number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid Input" << endl;
    }
    else if (n == 1)
    {
        cout << n << " is neither prime nor composite" << endl;
    }
    else if (isPrime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is a composite number" << endl;
    }
}