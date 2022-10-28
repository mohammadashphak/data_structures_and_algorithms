#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    // STL set declaration
    set<int> s;

    // Set operations
    // 1. Insert elements to set
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(0);
    s.insert(3);
    s.insert(2);
    s.insert(0);
    s.insert(2);

    // Set elements
    cout << "Set elements: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    // 2. Size of set
    cout << "Size of set: " << s.size() << endl;

    // 3. Find element in set
    cout << "Is 3 present in set? " << s.count(3) << endl;

    // 4. Erase element from set
    s.erase(2);
    s.erase(s.begin());

    // Set elements
    cout << "Set elements: ";
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    // 5. Check if set is empty
    cout << "Is set empty? " << s.empty() << endl;

    // 6. Iterator to set
    auto it = s.find(3);
    cout << "Iterator to 3: " << *it << endl;

    return 0;
}