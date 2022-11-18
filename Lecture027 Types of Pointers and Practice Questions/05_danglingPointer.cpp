#include <iostream>
using namespace std;

int *fun()
{
    int x = 10;
    return &x;
}

int main()
{
    // Dangling Pointer
    /*
    -> A dangling pointer is a pointer that points to a memory location that is no longer valid (freed or deleted memory location).
    -> It happens when we declare a pointer and initialize it to a memory location.
    -> After that, we delete the memory location and the pointer still points to that memory location.
    -> It is a bad practice to delete a memory location and still use the pointer.

    -> There are three different ways where pointer acts as a dangling pointer:
        1. Function Call: The pointer pointing to the local variable becomes dangling when the local variable is not static.

        2. Deallocation of Memory: Deallocation a memory location and still using the pointer.

        3. Variable goes out of scope: The pointer pointing to the local variable becomes dangling when the local variable goes out of scope where it is valid.
    */

    // 1. Function Call
    int *p1 = fun(); // darling pointer

    // p points to something which is not valid anymore
    // address of local variable 'x' returned which is not valid anymore

    cout << "p1: " << p1 << endl;

    p1 = NULL; // Now p no more a dangling pointer

    // 2. Deallocation of Memory
    int *p2 = (int *)malloc(sizeof(int));

    // after calling free(p2), p2 becomes dangling pointer
    free(p2);

    cout << "p2: " << p2 << endl;

    p2 = NULL; // Now p no more a dangling pointer

    // 3. Variable goes out of scope
    int *p3;
    {
        int x;
        p3 = &x;
    }
    cout << "p3: " << p3 << endl; // p3 is dangling pointer

    p3 = NULL; // Now p no more a dangling pointer
    return 0;
}