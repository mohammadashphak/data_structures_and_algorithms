#include <iostream>
using namespace std;

int main()
{
    // Wild Pointer
    /*
    -> A wild pointer is a pointer that points to a random memory location.
    -> It happens when we declare a pointer but don't initialize it.
    -> It is a bad practice to initialize a pointer to a random memory location.
    */

    int *p; // Contains garbage value
    cout << p << endl; // Random memory location
    cout << *p << endl; // Wild pointer

    int a = 10;
    p = &a;
    cout << p << endl; // Address of a
    cout << *p << endl; // 10
    
    return 0;
}