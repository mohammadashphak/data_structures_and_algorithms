#include <iostream>
using namespace std;

int &func(int a)
{
    // We should never return a local variable as a reference, reason being, as soon as the functions returns, local variable will be erased, however, we still will be left with a reference which might be a security bug in the code.

    int num = a;
    int &ans = num;
    return ans;
}

int main()
{
    // Reference Variable
    int a = 10;
    int &b = a;
    cout << "a: " << a << ", b: " << b << endl;
    b++;
    cout << "a: " << a << ", b: " << b << endl;
    a++;
    cout << "a: " << a << ", b: " << b << endl;

    // Reference Variable as a return type
    int c = 10;
    int &d = func(c);
    cout << "c: " << c << ", d: " << d << endl;
    d++;
    cout << "c: " << c << ", d: " << d << endl;
    c++;
    cout << "c: " << c << ", d: " << d << endl;

    return 0;
}