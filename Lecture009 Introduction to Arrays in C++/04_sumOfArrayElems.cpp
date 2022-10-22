#include <iostream>
using namespace std;

int sumArrayElems(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    // Sum of array elements
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[100];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int sum = sumArrayElems(array, n);

    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}