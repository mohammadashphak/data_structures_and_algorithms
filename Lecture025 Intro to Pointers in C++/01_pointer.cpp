#include <iostream>
using namespace std;

int main()
{
    // Pointer
    /*
    -> A pointer is a variable that stores the memory address of another variable as its value.
    -> A pointer variable points to a data type (like int) of the same type, and is created with the * operator. The address of the variable you are working with is assigned to the pointer:
    */

    int myAge = 43;    // An int variable
    int *ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    cout << "myAge: " << myAge << endl;

    // Output the memory address of myAge (0x7ffe5367e044)
    cout << "Address of myAge: " << &myAge << endl;

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    cout << "Address of myAge: " << ptr << endl;

    // Symbole Table
    /*
    Symbole table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc.

    // symbole table
    Name    Type    Value
    a       int     10
    b       int     20
    c       int     30
    p       int*    0x1000
    q       int*    0x2000
    r       int*    0x3000
    */

    // Size of Pointer
    /*
    -> The size of a pointer depends on the computer architecture. On a 32-bit system, the pointer size is 4 bytes and on a 64-bit system, the pointer size is 8 bytes.
    -> The sizeof operator can be used to find the size of a pointer variable.
    */

    int *p = 0;
    cout << "Size of pointer to int: " << sizeof(p) << endl;

    char *c = 0;
    cout << "Size of pointer to char: " << sizeof(c) << endl;

    double *d = 0;
    cout << "Size of pointer to double: " << sizeof(d) << endl;

    // Dereference
    /*
    -> The dereference operator is also known as an indirection operator, which is represented by (*).
    -> When indirection operator (*) is used with the pointer variable, then it is known as dereferencing a pointer.
    -> When we dereference a pointer, then the value of the variable pointed by this pointer will be returned.
    */

    int myAge2 = 43;     // Variable declaration
    int *ptr2 = &myAge2; // Pointer declaration

    // Reference: Output the memory address of myAge2 with the pointer (0x7ffe5367e044)
    cout << "Address of myAge2: " << ptr << endl;

    // Dereference: Output the value of myAge2 with the pointer (43)
    cout << "myAge2: " << *ptr << endl;

    // Update the value of variable
    int myAge3 = 43;     // Variable declaration
    int *ptr3 = &myAge3; // Pointer declaration

    cout << "myAge3: " << myAge3 << endl; // Output the value of myAge3 (43)

    myAge3 = 21; // Update the value of myAge3 to 21

    cout << "myAge3: " << myAge3 << endl; // Output the value of myAge3 (21)
    cout << "*ptr3: " << *ptr3 << endl;   // Output the value of myAge3 (21)

    // Update the value of variable using pointer
    int myAge4 = 43;     // Variable declaration
    int *ptr4 = &myAge4; // Pointer declaration

    cout << "myAge4: " << myAge4 << endl; // Output the value of myAge4 (43)

    *ptr4 = 21; // Update the value of myAge4 to 21
    (*ptr4)++;  // Increment the value of myAge4 by 1

    cout << "myAge4: " << myAge4 << endl; // Output the value of myAge4 (22)
    cout << "*ptr4: " << *ptr4 << endl;   // Output the value of myAge4 (22)

    // Copy Pointer
    /*
    -> When we copy a pointer, then the value of the pointer is copied, not the value of the variable.
    -> When we copy a pointer, then both the pointers will point to the same variable.
    */

    int myAge5 = 43;     // Variable declaration
    int *ptr5 = &myAge5; // Pointer declaration
    int *ptr6 = ptr5;    // Copy the value of ptr5 to ptr6

    cout << "myAge5: " << myAge5 << endl; // Output the value of myAge5 (43)
    cout << "*ptr5: " << *ptr5 << endl;   // Output the value of myAge5 (43)
    cout << "*ptr6: " << *ptr6 << endl;   // Output the value of myAge5 (43)

    *ptr5 = 21; // Update the value of myAge5 to 21

    cout << "myAge5: " << myAge5 << endl; // Output the value of myAge5 (21)
    cout << "*ptr5: " << *ptr5 << endl;   // Output the value of myAge5 (21)
    cout << "*ptr6: " << *ptr6 << endl;   // Output the value of myAge5 (21)

    // Null Pointer
    /*
    -> A null pointer is a pointer that points to nothing.
    -> A null pointer is a constant with a value of zero defined in several standard libraries.
    -> A null pointer is often used to initialize a pointer variable when you do not have an exact address to be assigned.
    */

    int *ptr7 = 0;    // A null pointer
    int *ptr8 = NULL; // Another null pointer

    cout << "ptr7: " << ptr7 << endl; // Output the value of ptr7 (0)
    cout << "ptr8: " << ptr8 << endl; // Output the value of ptr8 (0)

    // cout << "*ptr7: " << *ptr7 << endl; // will throw an error
    // cout << "*ptr8: " << *ptr8 << endl; // will throw an error

    // Pointer Arithmetic
    /*
    -> Pointer arithmetic is the process of adding or subtracting a number from a pointer.
    -> Pointer arithmetic is used to access the elements of an array.
    */

    int a = 10;
    int *p1 = &a;

    cout << "a: " << a << endl;     // Output the value of a (10)
    cout << "p1: " << p1 << endl;   // Output the memory address of a (0x7ffe5367e044)
    cout << "*p1: " << *p1 << endl; // Output the value of a (10)

    p1++; // Increment the pointer by 1

    cout << "p1: " << p1 << endl;   // Output the memory address of a (0x7ffe5367e048)
    cout << "*p1: " << *p1 << endl; // Output the value of a (random)

    p1--; // Decrement the pointer by 1

    cout << "p1: " << p1 << endl;   // Output the memory address of a (0x7ffe5367e044)
    cout << "*p1: " << *p1 << endl; // Output the value of a (10)

    return 0;
}