#include <iostream>
using namespace std;

void update(int **p)
{
    *p = (*p) + 1;
}

int main()
{
    // Double Pointer (Pointer to Pointer)
    /*
    -> Pointer to Pointer is a pointer which stores the address of another pointer.
    */

    int a = 10;
    int *p = &a;
    int **p2 = &p;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "p2 = " << p2 << endl;

    cout << "*p = " << *p << endl;
    cout << "**p2 = " << **p2 << endl;
    cout << "*p2 = " << *p2 << endl;

    // Update pointer using function call
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "Before update, ptr: " << ptr << endl;
    cout << "Before update, *ptr: " << *ptr << endl;
    update(&ptr); // Pass address of pointer to function (pass by pointer)
    cout << "After update, ptr: " << ptr << endl;
    cout << "After update, *ptr: " << *ptr << endl;

    // Other way to update pointer using function call
    int **ptr2 = &ptr;

    cout << "Before update, ptr: " << ptr << endl;
    cout << "Before update, *ptr: " << *ptr << endl;
    update(ptr2); // Pass address of pointer to function (pass by pointer)
    cout << "After update, ptr: " << ptr << endl;
    cout << "After update, *ptr: " << *ptr << endl;

    return 0;
}