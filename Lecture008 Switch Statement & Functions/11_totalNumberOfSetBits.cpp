#include <iostream>
using namespace std;

// Function to count total number of set bits in a number
int totalNumberOfSetBits(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans += n & 1;
        n = n >> 1;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    int ans = totalNumberOfSetBits(a) + totalNumberOfSetBits(b);

    cout << "The total number of set bits in a and b is " << ans << endl;

    return 0;
}