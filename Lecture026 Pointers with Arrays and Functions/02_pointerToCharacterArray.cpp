#include <iostream>
using namespace std;

int main()
{
    // Pointer to an character array
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', '\0'}; // "abcdefghi"
    int intArr[5] = {1, 2, 3, 4, 5};

    // cout behaves differently for pointer to character array and arrays of other data types

    cout << "intArr = " << intArr << endl;               // will print the address of the first element of the array
    cout << "*intArr = " << *intArr << endl;             // will print the value of the first element of the array
    cout << "intArr + 1 = " << intArr + 1 << endl;       // will print address of the second element of the array
    cout << "*(intArr + 1) = " << *(intArr + 1) << endl; // will print the value of the second element of the array

    int *intPtr = intArr;
    cout << "intPtr = " << intPtr << endl;               // will print address of first element of intArray
    cout << "*intPtr = " << *intPtr << endl;             // will print value of first element of intArray
    cout << "intPtr + 1 = " << intPtr + 1 << endl;       // will print address of second element of intArray
    cout << "*(intPtr + 1) = " << *(intPtr + 1) << endl; // will print value of second element of intArray

    // cout behaves differently for pointer to character array and arrays of other data types
    cout << "arr = " << arr << endl;               // will print the entire array/string
    cout << "*arr = " << *arr << endl;             // will print the first element of the array
    cout << "arr + 1 = " << arr + 1 << endl;       // will print the entire array/string from second element
    cout << "*(arr + 1) = " << *(arr + 1) << endl; // will print the second element of the array

    char *ptr = arr;
    cout << "ptr = " << ptr << endl;               // will print the entire array/string
    cout << "*ptr = " << *ptr << endl;             // will print the first element of the array
    cout << "ptr + 1 = " << ptr + 1 << endl;       // will print the entire array/string from second element
    cout << "*(ptr + 1) = " << *(ptr + 1) << endl; // will print the second element of the array

    // pointer to character
    char character = 'z';
    char *ptr2 = &character; // pointer to a character

    // here cout prints the value of the character untill it encounters a null character
    cout << "ptr2 = " << ptr2 << endl;

    // pointer to character array directly pointing to a string
    char *ptr3 = "abcdefghi"; // pointer to a character array
    // here the string is stored in a temporary location and the pointer points to that location. It's a bad practice to do this.

    cout << "ptr3 = " << ptr3 << endl;

    return 0;
}