/*
The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. Working knowledge of template classes is a prerequisite for working with STL.

STL has 4 components:

Algorithms
Containers
Functions
Iterators
*/

#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    // Array
    /*
    // Normal Array
    int arr[5] = {1, 2, 3, 4, 5};

    // Array size
    cout << "Array size: " << sizeof(arr) / sizeof(arr[0]) << endl;

    // Array elements
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    */

    // STL Array
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Array elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Array operations
    // 1. Size of array -> will give the size of array - O(1)
    cout << "Size of array: " << arr.size() << endl;

    // 2. Max size of array -> will give the max size of array - O(1)
    cout << "Max size of array: " << arr.max_size() << endl;

    // 3. Accessing elements -> will give the element at the given index - O(1)
    cout << "Element at index 1: " << arr[1] << endl;
    cout << "Element at index 2: " << arr.at(2) << endl;

    // 4. Front element -> will give the first element of the array - O(1)
    cout << "Front element: " << arr.front() << endl;

    // 5. Back element -> will give the last element of the array - O(1)
    cout << "Back element: " << arr.back() << endl;

    // 6. Fill array with a value -> will fill the array with the given value - O(n)
    arr.fill(10);

    // Array elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 7. Swap two arrays -> will swap the contents of two arrays - O(1)
    array<int, 5> arr2 = {5, 4, 3, 2, 1};
    arr.swap(arr2);

    // Array elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 8. Check if array is empty -> will check if the array is empty - O(1)
    cout << "Is array empty: " << arr.empty() << endl;

    // 9. Iterator pointing to the first element in the array -> will give the iterator pointing to the first element in the array - O(1)
    cout << "First element: " << *arr.begin() << endl;

    // 10. Iterator pointing to the last element in the array -> will give the iterator pointing to the last element in the array - O(1)
    cout << "Last element: " << *(arr.end() - 1) << endl;

    // 11. Reverse iterator pointing to the last element in the array (reverse beginning). It moves from last to first element - O(1)
    cout << "Reverse beginning: " << *arr.rbegin() << endl;

    // 12. Reverse iterator pointing to the theoretical element preceding the first element in the array (considered as reverse end). It moves from last to first element - O(1)
    cout << "Reverse end: " << *(arr.rend() - 1) << endl;

    // 13. Constant iterator pointing to the first element in the array - O(1)
    cout << "First element: " << *arr.cbegin() << endl;

    // 14. Constant iterator pointing to the last element in the array - O(1)
    cout << "Last element: " << *(arr.cend() - 1) << endl;

    // 15. Constant reverse iterator pointing to the last element in the array (reverse beginning). It moves from last to first element - O(1)
    cout << "Reverse beginning: " << *arr.crbegin() << endl;

    // 16. Constant reverse iterator pointing to the theoretical element preceding the first element in the array (considered as reverse end). It moves from last to first element - O(1)
    cout << "Reverse end: " << *(arr.crend() - 1) << endl;

    // Array elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}