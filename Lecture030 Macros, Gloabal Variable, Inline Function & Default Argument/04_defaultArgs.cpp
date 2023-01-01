#include <iostream>
using namespace std;

void printArray(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Default Arguments
    /*
    -> Default arguments are arguments that are automatically assigned a value if no value is provided for them in the function call.
    -> Default arguments are useful when you want to provide a default value for a parameter.
    -> Default arguments are specified in the function declaration.
    -> Default arguments must be specified from right to left.
    -> Default arguments are not used when the function is called with the corresponding argument.
    */

    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;

    printArray(arr, size);
    cout << endl;
    printArray(arr, size, 2);

    return 0;
}