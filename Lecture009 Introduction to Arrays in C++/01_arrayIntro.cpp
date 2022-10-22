#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // Array declaration
    int arr[5];

    // Array initialization
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Array declaration with initialization
    int arr2[5] = {10, 20, 30, 40, 50};

    // Other way of array declaration with initialization
    int arr3[] = {10, 20, 30, 40, 50};

    // Array traversal
    for (int i = 0; i < 5; i++)
    {
        cout << "Element of arr at index " << i << ": " << arr[i] << endl;
    }
    cout << endl;

    // Accessing array elements out of bound
    cout << "Element of arr at index 5: " << arr[5] << endl
         << endl; // Undefined behavior (error or garbage value)

    // By default all the elements of array are initialized with garbage value
    /*
    int arr4[5];

    cout << "Printing array arr4" << endl;
    printArray(arr4, 5);
    cout << endl;
    */

    // Initializing all the elements of array with 0
    /*
    int arr5[5] = {0};

    cout << "Printing array arr5" << endl;
    printArray(arr5, 5);
    cout << endl;
    */

    // Initializing some elements of array with 0
    /*
    int arr6[5] = {10, 20, 30};

    cout << "Printing array arr6" << endl;
    printArray(arr6, 5);
    cout << endl;
    */

    // Initializing all the elements of array with other than 0
    /*
    // Method 1
    int arr7[5] = {10, 10, 10, 10, 10};

    cout << "Printing array arr7" << endl;
    printArray(arr7, 5);
    cout << endl;

    // Method 2
    int arr8[5];

    for (int i = 0; i < 5; i++)
    {
        arr8[i] = 10;
    }

    cout << "Printing array arr8" << endl;
    printArray(arr8, 5);
    cout << endl;
    */

    // Getting size/length of array
    /*
    cout << "Length of arr: " << sizeof(arr) / sizeof(arr[0]) << endl;
    // but this is not a good way to get length of array
    // it will give us the length of array at initialization not of the elements we put in

    int arr9[15] = {2,3};
    cout << "Length of arr9: " << sizeof(arr9) / sizeof(arr9[0]) << endl;
    */

    // Character Array
    /*
    char chArr[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Printing array chArr" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << chArr[i] << " ";
    }
    cout << endl << endl;
    */

    // Float Array
    /*
    float floatArr[5] = {2.34, 6.34, 9.45, 3.67, 1.56};

    cout << "Printing array floatArr" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << floatArr[i] << " ";
    }
    cout << endl << endl;
    */

    // Double Array
    /*
    double doubleArr[5] = {3.234234, 2.34234, 6.12445, 1.76767, 0.252356};

    cout << "Printing array doubleArr" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << doubleArr[i] << " ";
    }
    cout << endl << endl;
    */

    // Boolean Array
    /*
    bool boolArr[5] = {true, true, false, true, false};

    cout << "Printing array boolArr" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << boolArr[i] << " ";
    }
    cout << endl << endl;
    */

    return 0;
}