// Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front.

#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
    // Deque declaration
    deque<int> d;

    // Deque operations
    // 1. Size of deque -> will give the size of deque - O(1)
    cout << "Size of deque: " << d.size() << endl;

    // 2. Max size of deque -> will give the max size of deque - O(1)
    cout << "Max size of deque: " << d.max_size() << endl;

    // 3. Push elements at the end to deque -> will push the element at the end of the deque - O(1)
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    cout << "Size of deque after adding 3 elements at the end: " << d.size() << endl;

    // 4. Push elements at the front to deque -> will push the element at the front of the deque - O(1)
    d.push_front(4);
    d.push_front(5);
    d.push_front(6);
    cout << "Size of deque after adding 3 elements at the front: " << d.size() << endl;

    // 5. Accessing elements -> will give the element at the given index - O(1)
    cout << "Element at index 0: " << d[0] << endl;
    cout << "Element at index 1: " << d.at(1) << endl;

    // 6. Front element -> will give the first element of the deque - O(1)
    cout << "Front element: " << d.front() << endl;

    // 7. Back element -> will give the last element of the deque - O(1)
    cout << "Back element: " << d.back() << endl;

    // 8. Fill deque with a value -> will fill the deque with the given value - O(n)
    deque<int> d2(5, 2); // size: 5, valueOfEachElem: 2;

    // Deque elements -> will give the elements of the deque - O(n)
    for (int i = 0; i < d2.size(); i++)
    {
        cout << d2[i] << " ";
    }
    cout << endl;

    // 9. Swap two deques -> will swap the contents of two deques - O(1)
    deque<int> d3 = {5, 4, 3, 2, 1};
    d.swap(d3);

    //  10. Check if deque is empty -> will check if the deque is empty - O(1)
    cout << "Is deque empty? " << d.empty() << endl;

    // 11. Iterator pointing to the first element in the deque -> will give the iterator pointing to the first element in the deque - O(1)
    cout << "First element: " << *d.begin() << endl;

    // 12. Iterator pointing to the last element in the deque -> will give the iterator pointing to the last element in the deque - O(1)
    cout << "Last element: " << *(d.end() - 1) << endl;

    // 13. Reverse iterator pointing to the last element in the deque (reverse beginning). It moves from last to first element - O(1)
    cout << "Reverse beginning: " << *d.rbegin() << endl;

    // 14. Reverse iterator pointing to the theoretical element preceding the first element in the deque (considered as reverse end). It moves from last to first element - O(1)
    cout << "Reverse end: " << *(d.rend() - 1) << endl;

    // 15. Constant iterator pointing to the first element in the deque - O(1)
    cout << "First element: " << *d.cbegin() << endl;

    // 16. Constant iterator pointing to the last element in the deque - O(1)
    cout << "Last element: " << *(d.cend() - 1) << endl;

    // 17. Constant reverse iterator pointing to the last element in the deque (reverse beginning). It moves from last to first element - O(1)
    cout << "Reverse beginning: " << *d.crbegin() << endl;

    // 18. Constant reverse iterator pointing to the theoretical element preceding the first element in the deque (considered as reverse end). It moves from last to first element - O(1)
    cout << "Reverse end: " << *(d.crend() - 1) << endl;

    // 19. Remove last element -> will remove the last element of the deque - O(1)
    d.pop_back();

    // 20. Remove first element -> will remove the first element of the deque - O(1)
    d.pop_front();

    // 21. Insert elements -> will insert the element at the given index - O(n)
    d.insert(d.begin() + 2, 10); // Insert 10 at index 2

    // 22. Erase elements -> will erase the element at the given index - O(n)
    d.erase(d.begin() + 1);            // Erase element at index 1
    d.erase(d.begin(), d.begin() + 1); // Erase element from index 0 to 1 (excluding 1)

    // Deque elements -> will give the elements of the deque - O(n)
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    // 23. Clear deque -> will clear the deque - O(n)
    d.clear();

    cout << "Size of the deque after clearing: " << d.size() << endl;

    // 24. Initialize deque with copying the other deque in it -> will initialize the deque with copying the other deque in it - O(n)
    deque<int> d4(d2);

    // Deque elements
    for (int i = 0; i < d4.size(); i++)
    {
        cout << d4[i] << " ";
    }
    cout << endl;

    return 0;
}