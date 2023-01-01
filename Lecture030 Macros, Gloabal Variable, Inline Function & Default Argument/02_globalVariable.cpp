#include <iostream>
using namespace std;

// Global variable
int score = 15;

void func1(int i)
{
    cout << "score (in func1): " << score << endl;

    // changes in global variable will be reflected everywhere
    score++;

    // Local variable
    i = 10; // changes in local variable will not be reflected out of the function/block
    cout << "i (in func1): " << i << endl;
}

void func2(int i)
{
    cout << "score (in func2): " << score << endl;

    // Local variable
    i = 13; // changes in local variable will not be reflected out of the function/block
    cout << "i (in func2): " << i << endl;
}

int main()
{
    // Scope of varibles
    /*
    -> the scope of a variable is the part of the program where the variable is accessible or visible. There are two types of variable scopes:

    01. Local variables: These are variables that are defined within a function or block of code. They are only accessible or visible within that function or block of code and are not visible to other parts of the program.

    02. Global variables: These are variables that are defined outside of all functions and blocks of code. They are visible to all parts of the program and can be accessed from anywhere in the code.
    */

    cout << "score (in main): " << score << endl;

    // Local variable
    int i = 5;

    cout << "i (in main) before func1: " << i << endl;

    func1(i);
    cout << "i (in main) after func1: " << i << endl;

    func2(i);
    cout << "i (in main) after func2: " << i << endl;

    // Local variable
    int var = 20;

    cout << "var (in main): " << var << endl;

    {
        // Local variable
        int var = 25;

        // when we use a variable name, the compiler first looks for a local variable with that name and if it doesn't find one, it looks for a global variable with that name.
        // changes in local variable will not be reflected out of the function/block
        cout << "var (in block): " << var << endl;
    }

    cout << "var (in main): " << var << endl;

    return 0;
}