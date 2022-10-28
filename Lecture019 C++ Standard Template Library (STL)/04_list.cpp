#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    // STL list declaration
    list<int> l;

    // List Operations
    // 1. front() -> Returns the value of the first element in the list. - O(1)
    cout << "Front element: " << l.front() << endl;

    // 2. back() -> Returns the value of the last element in the list.  - O(1)
    cout << "Back element: " << l.back() << endl;

    // 3. push_front() -> Adds a new element at the beginning of the list, after its current first element. - O(1)
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    cout << "Front element after adding 3 elements: " << l.front() << endl;

    // 4. push_back() -> Adds a new element at the end of the list, after its current last element. - O(1)
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    cout << "Back element after adding 3 elements: " << l.back() << endl;

    // List elements
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 5. pop_front() -> Removes the first element in the list, effectively reducing its size by one. - O(1)
    l.pop_front();
    cout << "Front element after removing 1 element: " << l.front() << endl;

    // 6. pop_back() -> Removes the last element in the list, effectively reducing its size by one. - O(1)
    l.pop_back();
    cout << "Back element after removing 1 element: " << l.back() << endl;

    // List elements
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 7. list::begin() -> begin() function returns an iterator pointing to the first element of the list. - O(1)
    cout << "First element: " << *l.begin() << endl;

    // 8. list::end() -> end() function returns an iterator pointing to the theoretical last element which follows the last element. - O(1)
    cout << "Last element: " << *(--l.end()) << endl;

    // 9. list rbegin() and rend() -> rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list. - O(1)
    cout << "Last element: " << *l.rbegin() << endl;
    cout << "First element: " << *(--l.rend()) << endl;

    // 10. list cbegin() and cend() -> cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list. - O(1)
    cout << "First element: " << *l.cbegin() << endl;
    cout << "Last element: " << *(--l.cend()) << endl;

    // 11. list crbegin() and crend() -> crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list. - O(1)
    cout << "Last element: " << *l.crbegin() << endl;
    cout << "First element: " << *(--l.crend()) << endl;

    // 12. empty() -> Returns whether the list is empty(1) or not(0). - O(1)
    cout << "Is list empty: " << l.empty() << endl;

    // 13. insert() -> Inserts new elements in the list before the element at a specified position. - O(1)
    l.insert(++l.begin(), 7); // Insert 7 after 2
    l.insert(--l.end(), 8); // Insert 8 before 5

    // List elements
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 14. erase() -> Removes a single element or a range of elements from the list. - O(1)
    l.erase(l.begin());
    // l.erase(l.begin(), l.end());

    // List elements
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 15. assign()	Assigns new elements to list by replacing current elements and resizes the list. - O(n)
    l.assign(5, 9);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 16. remove() -> Removes all the elements from the list, which are equal to given element. - O(n)
    l.remove(9);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 17. size() -> Returns the number of elements in the list. - O(1)
    cout << "Size of list: " << l.size() << endl;

    // 18. max_size() -> Returns the maximum number of elements that the list can hold. - O(1)
    cout << "Maximum size of list: " << l.max_size() << endl;

    // 19. resize() -> Resizes the list so that it contains ‘g’ elements. - O(n)
    l.resize(3);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 20. clear() -> Removes all the elements from the list container (which are destroyed), leaving the container with a size of 0. - O(n)
    l.clear();

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Adding elements to list
    l.assign(5, 9);
    l.push_back(10);
    l.push_back(11);
    l.push_back(12);

    // 21. list::remove_if() -> Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function. - O(n)
    l.remove_if([](int x)
                { return x % 2 == 0; });

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 22. reverse() -> Reverses the list. - O(n)
    l.reverse();

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 23. list resize() -> Used to resize a list container. - O(n)
    l.resize(10);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 24. sort() -> the list in increasing order. - O(nlogn)
    l.sort();

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 25. list unique() -> Removes all duplicate consecutive elements from the list. - O(n)
    l.unique();

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 26. swap() -> Swaps the contents of one list with another list of same type and size. - O(1)
    list<int> l2;
    l2.assign(5, 9);
    l2.push_back(10);
    l2.push_back(11);
    l2.push_back(12);

    l.swap(l2);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 27. list splice() -> Used to transfer elements from one list to another. - O(1)
    list<int> l3;
    l3.assign(5, 10);

    l.splice(l.begin(), l3);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 28. list merge() -> Merges two sorted lists into one. - O(n)
    list<int> l4;
    l4.assign(5, 11);

    l.merge(l4);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 29. list emplace() -> Extends list by inserting new element at a given position. - O(1)
    l.emplace(l.begin(), 7);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 30. list emplace_back() -> Extends list by inserting new element at the end of the list. - O(1)
    l.emplace_back(13);

    // List elements
    cout << "List elements: ";
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}