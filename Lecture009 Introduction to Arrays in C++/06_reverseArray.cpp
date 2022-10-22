#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // Reverse an array
    int arr1[9] = {3, 44, 1, 4, 6, 3, 8, 233, 5};
    int arr2[10] = {4, 2, 3, 7, 2, 55, 24, 77, 2, 1};

    reverseArray(arr1, 9);
    reverseArray(arr2, 10);

    printArray(arr1, 9);
    printArray(arr2, 10);
    return 0;
}