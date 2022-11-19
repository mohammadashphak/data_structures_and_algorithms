#include <iostream>
using namespace std;

void updateByValue(int x)
{
    x++;
    cout << "x in updateByValue(): " << x << endl;
}

void updateByReference(int &x)
{
    x++;
    cout << "x in updateByReference(): " << x << endl;
}

void updatePointerByValue(int *p)
{
    p++;
    cout << "p in updatePointerByValue(): " << p << endl;
    cout << "*p in updatePointerByValue(): " << *p << endl;
}

void updatePointerByReference(int *&p)
{
    p++;
    cout << "p in updatePointerByReference(): " << p << endl;
    cout << "*p in updatePointerByReference(): " << *p << endl;
}

int main()
{
    // Pass by Reference
    int a = 10;
    cout << "a: " << a << endl;

    // Pass by Value
    updateByValue(a);
    cout << "a: " << a << endl;

    // Pass by Reference
    updateByReference(a);
    cout << "a: " << a << endl;

    // Pass by Reference in pointer
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    
    // Pass by Value
    updatePointerByValue(ptr);
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    // Pass by Reference
    updatePointerByReference(ptr);
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;


    return 0;
}