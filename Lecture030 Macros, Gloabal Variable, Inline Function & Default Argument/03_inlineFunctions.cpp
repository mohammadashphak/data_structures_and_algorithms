#include <iostream>
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Inline Functions
    /*
    -> An inline function is a function that is expanded in line when it is called, rather than being invoked as a separate function.
    -> This can improve the performance of your code by reducing the overhead of function calls.
    -> The inline keyword is used to specify that a function should be expanded in line.
    -> Inline function may be useful (if it is small) for embedded systems because inline can yield less code than the function call preamble and return.
    -> Inline functions are not always expanded in line. The compiler may choose not to expand an inline function.
    1. If the function is too large, the compiler may choose not to expand it.
    2. If a function contains static variables, the compiler may choose not to expand it.
    3. If a function contains loops or switch or goto statements, the compiler may choose not to expand it.
    4. If a function is recursive, the compiler may choose not to expand it.
    */

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << "Max: " << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);
    cout << "Max: " << ans << endl;

    return 0;
}