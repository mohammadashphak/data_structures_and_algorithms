#include <iostream>
using namespace std;

bool searchArray(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    // Linear Search in Array
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n;
    cout << "Enter the number to be searched: ";
    cin >> n;

    bool found = searchArray(arr, 10, n);

    if (found) {
        cout << "The number is present in the array" << endl;
    } else {
        cout << "The number is not present in the array" << endl;
    }

    return 0;
}