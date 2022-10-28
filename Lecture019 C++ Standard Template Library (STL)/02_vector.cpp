/*
1. Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

2. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end.

3. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens.

4. Inserting and erasing at the beginning or in the middle is linear in time.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // STL vector declaration
    vector<int> v;

    // Vector elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Vector operations
    // 1. Size of vector -> will give the size of vector - O(1)
    cout << "Size of vector: " << v.size() << endl;

    // 2. Capacity of vector -> will give the capacity of vector - O(1)
    cout << "Capacity of vector: " << v.capacity() << endl;

    // 3. Max size of vector -> will give the max size of vector - O(1)
    cout << "Max size of vector: " << v.max_size() << endl;

    // 4. Push elements to vector -> will add the element at the end of vector - O(1)
    v.push_back(1);
    cout << "Size of vector after adding 1 element: " << v.size() << endl;
    cout << "Capacity of vector after adding 1 element: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size of vector after adding 2 elements: " << v.size() << endl;
    cout << "Capacity of vector after adding 2 elements: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size of vector after adding 3 elements: " << v.size() << endl;
    cout << "Capacity of vector after adding 3 elements: " << v.capacity() << endl; // Capacity is doubled every time after filling the vector and then adding new elements

    // 5. Accessing elements -> will give the element at the given index - O(1)
    cout << "Element at index 1: " << v[1] << endl;
    cout << "Element at index 2: " << v.at(2) << endl;

    // 6. Front element -> will give the first element of the vector - O(1)
    cout << "Front element: " << v.front() << endl;

    // 7. Back element -> will give the last element of the vector - O(1)
    cout << "Back element: " << v.back() << endl;

    // 8. Fill vector with a value -> will fill the vector with the given value - O(n)
    vector<int> v2(5, 2); // size: 5, valueOfEachElem: 2;

    // Vector elements
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // 9. Swap two vectors -> will swap the contents of two vectors - O(1)
    vector<int> v3 = {5, 4, 3, 2, 1};
    v.swap(v3);

    // Vector elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // 10. Check if vector is empty -> will check if the vector is empty or not - O(1)
    cout << "Is vector empty: " << v.empty() << endl;

    // 11. Iterator pointing to the first element in the vector -> will give the iterator pointing to the first element in the vector - O(1)
    cout << "First element: " << *v.begin() << endl;

    // 12. Iterator pointing to the last element in the vector -> will give the iterator pointing to the last element in the vector - O(1)
    cout << "Last element: " << *(v.end() - 1) << endl;

    // 13. Reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element - O(1)
    cout << "Reverse beginning: " << *v.rbegin() << endl;

    // 14. Reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end). It moves from last to first element - O(1)
    cout << "Reverse end: " << *(v.rend() - 1) << endl;

    // 15. Constant iterator pointing to the first element in the vector - O(1)
    cout << "First element: " << *v.cbegin() << endl;

    // 16. Constant iterator pointing to the last element in the vector - O(1)
    cout << "Last element: " << *(v.cend() - 1) << endl;

    // 17. Constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element - O(1)
    cout << "Reverse beginning: " << *v.crbegin() << endl;

    // 18. Constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end). It moves from last to first element - O(1)
    cout << "Reverse end: " << *(v.crend() - 1) << endl;

    // 19. Remove last element -> will remove the last element of the vector - O(1)
    v.pop_back();

    // 20. Insert elements -> will insert the element at the given index - O(n)
    v.insert(v.begin() + 2, 10); // Insert 10 at index 2

    // 21. Erase elements -> will erase the element at the given index - O(n)
    v.erase(v.begin() + 1);            // Erase element at index 1
    v.erase(v.begin(), v.begin() + 1); // Erase element from index 0 to 1 (excluding 1)

    // Vector elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // 22. Clear vector -> will clear the vector - O(n)
    v.clear();

    cout << "Size of the vector after clearing: " << v.size() << endl;

    // 23. Initialize vector with copying the other vector in it -> will initialize the vector with copying the other vector in it - O(n)
    vector<int> v4(v2);

    // Vector elements
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    return 0;
}