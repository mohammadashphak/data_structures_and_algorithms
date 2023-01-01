#include <iostream>
using namespace std;

// Macro
/*
-> a macro is a fragment of code that has been given a name.
-> When we use a macro, the code is replaced with its corresponding fragment before the program is compiled.
-> This can be useful for defining constants, repeating code, or making code more readable.
-> Macros are defined using the #define preprocessor directive, followed by the name of the macro and the code that it should be replaced with.
*/

// Types Of Macros
/*
1. Object-like Macros: An object-like macro is a simple identifier that will be replaced by a code fragment. It is called object-like because it looks like an object in code that uses it. It is popularly used to replace a symbolic name with numerical/variable represented as constant.

2. Chain Macros: Macros inside macros are termed as chain macros. In chain macros first of all parent macro is expanded then the child macro is expanded.

3. Multi-line Macros: An object-like macro could have a multi-line. So to create a multi-line macro you have to use backslash-newline.

4. Function-like Macro: These macros are the same as a function call. It replaces the entire code instead of a function name. Pair of parentheses immediately after the macro name is necessary. If we put a space between the macro name and the parentheses in the macro definition, then the macro will not work.
A function-like macro is only lengthened if and only if its name appears with a pair of parentheses after it. If we don’t do this, the function pointer will get the address of the real function and lead to a syntax error.
*/

// Macro vs Variable
/*
1. Macro is a fragment of code that has been given a name. Variable is a name given to a memory location.
2. Macro is expanded at compile time, whereas variables are evaluated at runtime.
3. Macro is used to define constants, repeating code, or making code more readable. Variables are used to store data.
4. Macro is not a part of the program. Variables are a part of the program.
*/

// Object-like Macros
#define PI 3.14

// Chain Macros
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Multi-line Macros
#define ELE 1, \
            2, \
            3

// Function-like Macros
// 1
#define AREA(l, b) (l * b)

// 2
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int r = 5;
    double area = PI * r * r;
    cout << "Area of circle of radius " << r << " is " << area << endl;

    cout << "Instgram followers: " << FOLLOWERS << endl;

    int arr[] = {ELE};
    cout << "Elements: ";
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Area of rectangle of length 10 and breadth 5 is " << AREA(10, 5) << endl;

    int a = 10, b = 20;
    cout << "Minimum of " << a << " and " << b << " is " << min(a, b) << endl;

    return 0;
}