#include <iostream>
#include <limits.h>
using namespace std;

int getMin(int numbers[], int n)
{
    int minNumber = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // manual
        // if (numbers[i] < minNumber)
        // {
        //     minNumber = numbers[i];
        // }

        // using pre defined function
        minNumber = min(minNumber, numbers[i]);
    }

    return minNumber;
}

int getMax(int numbers[], int n)
{
    int maxNumber = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // manual
        // if (numbers[i] > maxNumber)
        // {
        //     maxNumber = numbers[i];
        // }

        // using pre defined function
        maxNumber = max(maxNumber, numbers[i]);
    }

    return maxNumber;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int numbers[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << " element of the array: ";
        cin >> numbers[i];
    }

    cout << "The minimum element of the array is: " << getMin(numbers, size) << endl;
    cout << "The maximum element of the array is: " << getMax(numbers, size) << endl;

    return 0;
}