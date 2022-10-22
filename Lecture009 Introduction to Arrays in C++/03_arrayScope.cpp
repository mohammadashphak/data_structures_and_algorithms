#include <iostream>
using namespace std;

void updateArray(int arr[], int size) {
    cout << endl << "Inside the updateArray function" << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + 1;
    }

    cout << "Printing the array inside the updateArray function" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going out of the updateArray function" << endl;
}

int main(int argc, char const *argv[])
{
    // Array scope
    int array[5] = {1, 2, 3, 4, 5};

    cout << "Printing the array inside the main function" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    updateArray(array, 5);

    cout << endl;

    cout << "Printing the array inside the main function" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    return 0;
}