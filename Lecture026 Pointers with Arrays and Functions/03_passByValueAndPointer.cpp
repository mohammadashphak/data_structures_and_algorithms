#include <iostream>
using namespace std;

int IncrementByValue(int d)
{
    cout << "...Updating..." << endl;
    d = d + 1;
    cout << "d in Increment(): " << d << endl;
}

int IncrementByPointer(int *ptr)
{
    cout << "...Updating..." << endl;
    *ptr = *ptr + 1;                                 // e = e + 1;
    cout << "*ptr in Increment(): " << *ptr << endl; // e
}

int main()
{
    // Pass by value
    int a = 5;
    int b = a; // Copy of a is made in b. So, changing the value of b will not change the value of a.
    b = 10;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // Pass by pointer
    int *p = &a;
    int *q = p; // Copy of p is made in q. So, changing the value of q will not change the value of p.
    *q = 20;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // Pass by reference in functions
    int c = 5;
    cout << "c: " << c << endl;
    IncrementByValue(c);
    cout << "c: " << c << endl; // will print the same value as before because c in Increment() is a copy of c in main(). It's value is not updated. (pass by value).

    // Pass by pointer in functions
    int d = 5;
    cout << "d: " << d << endl;
    IncrementByPointer(&d);
    cout << "d: " << d << endl; // will print the updated value because ptr in Increment() is a pointer to d in main(). It's value is updated. (pass by pointer).

    // Reference variable and pass by reference will be explained in Lecture028.

    return 0;
}