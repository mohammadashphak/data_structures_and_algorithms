#include <iostream>
using namespace std;

// Function to print counting
void printCounting(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // Counting
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printCounting(n);

    return 0;
}