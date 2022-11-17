#include <iostream>
using namespace std;

void print(int *p)
{
    cout << "Value: " << *p << endl;
}

void update(int *p)
{
    cout << "...Updating..." << endl;
    p = p + 1; // This will not update the value of p in main(). This is because p is a local variable in this function.
    cout << "Pointer in update(): " << p << endl;
}

int getSum(int arr[], int n)
{
    // parameter int arr[] = int *arr
    // The parameter arr is a pointer to the first element of the array. So, the sizeof(arr) will be 8 bytes.
    cout << "Size: " << sizeof(arr) << endl; // size of pointer

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int value = 5;
    int *p = &value;

    // print(p);
    cout << "Pointer before updating: " << p << endl;

    update(p);

    cout << "Pointer after updating: " << p << endl; // This will print the same value as before because p is a local variable in the function update(). It's value is not updated. (pass by value).
    // solution: pass by pointer. In case of pointer we use pointer to pointer (double pointer). Lecture027.
    
    // Sum of array elements using pointer
    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum is " << getSum(arr + 3, 3) << endl;

    return 0;
}