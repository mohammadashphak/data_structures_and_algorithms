#include <iostream>
using namespace std;

int main()
{
    // NULL Pointer
    /*
    -> A NULL pointer is a pointer that points to nothing.
    -> It is a good practice to initialize a pointer to NULL.
    */

    int *p; // Contains garbage value
    p = NULL; // Contains 0
    cout << p << endl;

    int *p2 = 0; // 0 is also a null pointer
    cout << p2 << endl;
    return 0;
}