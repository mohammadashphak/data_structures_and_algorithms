#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternates(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main(int argc, char const *argv[])
{
    // Swap Alternates in an array
    int even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int odd[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Even Array" << endl;
    printArray(even, 10);

    swapAlternates(even, 10);

    cout << "Swapped Even Array" << endl;
    printArray(even, 10);

    cout << "Odd Array" << endl;
    printArray(odd, 9);

    swapAlternates(odd, 9);

    cout << "Swapped Odd Array" << endl;
    printArray(odd, 9);

    return 0;
}