#include <iostream>
using namespace std;

int main()
{
    // Pointer to an array
    int arr[10] = {23, 122, 41, 67};

    // The name of an array is a pointer to the first element of the array
    cout << "Address of first memory block (arr): " << arr << endl;
    cout << "Address of first memory block (&arr[0]): " << &arr[0] << endl;
    cout << "Address of first memory block (&arr): " << &arr << endl;

    // Get value of array elements using array name
    cout << "*arr = " << *arr << endl;
    cout << "arr[0] = " << arr[0] << endl;
    cout << "*(arr + 1) = " << *(arr + 1) << endl;
    cout << "arr[1] = " << arr[1] << endl;

    cout << "*arr + 1 = " << *arr + 1 << endl;
    cout << "*(arr + 1) = " << *(arr + 1) << endl;
    cout << "*(arr) + 1 = " << *(arr) + 1 << endl;
    cout << "(*arr) + 1 = " << (*arr) + 1 << endl;
    cout << "*(&arr) = " << *(&arr) << endl; // &arr is a pointer to an entire array
    cout << "*(&arr + 1) = " << *(&arr + 1) << endl;
    cout << "*(&arr) + 1 = " << *(&arr) + 1 << endl;

    // Important
    cout << "3 [arr] = " << 3 [arr] << endl; // i[arr] = arr[i] = *(arr + i)

    // Access array elements using pointer
    int *ptr = &arr[0];
    cout << "*ptr = " << *ptr << endl;
    cout << "ptr[0] = " << ptr[0] << endl;

    // sizeof(array) and sizeof(pointer) are different
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    cout << "sizeof(*arr) = " << sizeof(*arr) << endl;
    cout << "sizeof(&arr) = " << sizeof(&arr) << endl;

    cout << "sizeof(ptr) = " << sizeof(ptr) << endl;
    cout << "sizeof(*ptr) = " << sizeof(*ptr) << endl;
    cout << "sizeof(&ptr) = " << sizeof(&ptr) << endl;



    // Address of array elements
    int arr2[20] = {1, 2, 3, 5};
    cout << "&arr2[0] = " << &arr2[0] << endl;
    cout << "&arr2 = " << &arr2 << endl; // &arr2 = &arr2[0], but &arr2 is a pointer to an entire array (not a pointer to the first element of the array)
    cout << "arr2 = " << arr2 << endl;
    cout << "arr2 + 1 = " << arr2 + 1 << endl;   // arr2 + 1 = &arr2[1]
    cout << "&arr2 + 1 = " << &arr2 + 1 << endl; // &arr2 is a pointer to an entire array (not a pointer to the first element of the array) so &arr2 + 1 will point the next block of 20 elements

    int *ptr2 = &arr2[0];
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr2 + 1 = " << ptr2 + 1 << endl;   // ptr2 + 1 = &a[1]
    cout << "&ptr2 = " << &ptr2 << endl;         // &ptr2 is a pointer to a pointer (double pointer)
    cout << "&ptr2 + 1 = " << &ptr2 + 1 << endl; // &ptr2 + 1 = &ptr2 + sizeof(int*)

    // We cannot assign a new pointer value to an array name. The array name will always point to the first element of the array. It is a constant pointer saved in symbol table.

    // arr = &arr2[0]; // Error: cannot assign to variable 'arr' with const-qualified type 'int (*)[10]'
    // arr = arr2; // Error: cannot assign to variable 'arr' with const-qualified type 'int (*)[10]'

    // We can assign a new pointer value to a pointer variable. The pointer variable will point to the new address.
    ptr2 = &arr2[0]; // OK
    cout << "ptr2 = " << ptr2 << endl;
    ptr2 = &arr2[1]; // OK
    cout << "ptr2 = " << ptr2 << endl;
    ptr2 = ptr2 + 1; // OK
    cout << "ptr2 = " << ptr2 << endl;

    return 0;
}