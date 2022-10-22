#include <iostream>
using namespace std;

// Function to give nth term of an arithmetic progression
int nthTerm(int a, int d, int n)
{
    int ans = a + (n - 1) * d;
    return ans;
}

int main(int argc, char const *argv[])
{
    int a, d, n;
    cout << "Enter the first term: ";
    cin >> a;

    cout << "Enter the common difference: ";
    cin >> d;

    cout << "Enter the value of n: ";
    cin >> n;

    int ans = nthTerm(a, d, n);
    cout << "The " << n << "th term of the AP is " << ans << endl;

    return 0;
}