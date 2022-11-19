#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // Dynamic Memory Allocation
    /*
    -> Dynamic Memory Allocation is a process of allocating memory at runtime.
    -> In C++, we can allocate memory dynamically using new operator.
    -> new operator returns a pointer to the memory allocated.
    -> We can use this pointer to access the memory allocated.
    -> We can also use this pointer to deallocate the memory allocated using delete operator.
    */

    // Syntax:
    // dataType *ptr = new dataType;
    // dataType *ptr = new dataType[size];

    // Example:
    int *ptr = new int;
    *ptr = 10;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    // Example:
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    cout << "arr: " << arr << endl;
    cout << "getSum(arr, 10): " << getSum(arr, 10) << endl;

    // Example:
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Create an array of size n
    int *arr2 = new int[n];

    // Taking input from user
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "arr2: " << arr2 << endl;
    cout << "getSum(arr2, n): " << getSum(arr2, n) << endl;

    // Deallocate the memory
    delete ptr;
    delete[] arr;
    delete[] arr2;

    // Difference between static and dynamic memory allocation
    /*
    -> In static memory allocation, memory is allocated at compile time.
    -> In dynamic memory allocation, memory is allocated at runtime.
    -> In static memory allocation, memory is allocated on stack.
    -> In dynamic memory allocation, memory is allocated on heap.
    -> In static memory allocation, memory is deallocated automatically.
    -> In dynamic memory allocation, memory is deallocated manually.
    -> In static memory allocation, memory is allocated to local variables.
    -> In dynamic memory allocation, memory is allocated to global variables.
    */

    // case 1
    /*
    while (true)
    {
        // This will not cause any problem. Because memory is deallocated automatically.
        int i = 5;
    }
    */

    // case 2
    /*
    while (true)
    {
        // This will create a memory leak. Because we are not deallocating the memory.
        int *ptr = new int[10];
    }
    */

    return 0;
}