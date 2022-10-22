#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Switch Statement
    /*
    int a = 3;
    switch (a)
    {
    case 1:
        cout << "Case 1" << endl;
        break;
    case 2:
        cout << "Case 2" << endl;
        break;
    case 3:
        cout << "Case 3" << endl;
        break;
    default:
        cout << "Default Case" << endl;
        break;
    }
    */

    /*
       char a = '1';
        switch (a)
        {
        case 1:
            cout << "Integer 1" << endl;
            break;
        case '1':
            cout << "Character 1" << endl;
            break;
        default:
            cout << "Default Case" << endl;
            break;
        }
    */

    // Nested Switch Statement
    /*
    int a = 3, b = 2;
    switch (a)
    {
    case 1:
        cout << "Case 1" << endl;
        break;
    case 2:

        cout << "Case 2" << endl;
        break;
    case 3:
        cout << "Case 3" << endl;
        switch (b)
        {
        case 1:
            cout << "Case 1" << endl;
            break;
        case 2:
            cout << "Case 2" << endl;
            break;
        case 3:
            cout << "Case 3" << endl;
            break;
        default:
            cout << "Default Case" << endl;
            break;
        }
        break;
    default:
        cout << "Default Case" << endl;
        break;
    }
    */

    // Get out of switch statement in infinite loop
    /*
    int a = 3;
    while (true)
    {
        switch (a)
        {
        case 1:
            cout << "Case 1" << endl;
            break;
        case 2:
            cout << "Case 2" << endl;
            break;
        case 3:
            cout << "Case 3" << endl;
            exit(0); // will exit the program
            break;
        default:
            cout << "Default Case" << endl;
            break;
        }
    }
    */

    // Continue Statement in Switch Statement
    /*
    int a = 3;
    switch (a)
    {
    case 1:
        cout << "Case 1" << endl;
        break;
    case 2:
        cout << "Case 2" << endl;
        break;
    case 3:
        cout << "Case 3" << endl;
        continue; // will give the error because continue statement is not allowed in switch statement. It is only allowed in loops.
        break;
    default:
        cout << "Default Case" << endl;
        break;
    }
    */

    return 0;
}