#include <iostream>
using namespace std;

int main()
{
    // Void Pointer
    /*
    -> A void pointer is a generic pointer that can point to any type of data.
    -> Void pointer can be typecasted to any type of pointer.
    */

    int a = 10;
    float b = 10.5;
    char c = 'A';

    void *p;
    p = &a;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *(int *)p << endl; // Typecast void pointer to int pointer

    p = &b;
    cout << "b = " << b << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *(float *)p << endl; // Typecast void pointer to float pointer

    p = &c;
    cout << "c = " << c << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *(char *)p << endl; // Typecast void pointer to char pointer

    return 0;
}