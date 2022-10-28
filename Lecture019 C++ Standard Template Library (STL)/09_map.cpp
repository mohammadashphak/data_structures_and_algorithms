#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    // STL map declaration
    map<int, string> m;

    // Map operations
    // 1. Insert elements to map -> will insert the element to the map - O(log n)
    m.insert({1, "one"});
    m.insert({3, "three"});
    m.insert({2, "two"});
    m[4] = "four";
    m[5] = "five";
    m[1] = "one";           // Overwrite the value of key 1
    m[1] = "two";           // Overwrites the previous value
    m.insert({1, "three"}); // Does nothing

    // Map elements
    cout << "Map elements: ";
    for (auto i : m)
        cout << i.first << "->" << i.second << " ";
    cout << endl;

    // 2. Size of map -> will give the size of map - O(1)
    cout << "Size of map: " << m.size() << endl;

    // 3. Find element in map -> will find the element in map - O(log n)
    cout << "Is 3 present in map? " << m.count(3) << endl;

    // 4. Erase element from map -> will erase the element from map - O(log n)
    m.erase(2);
    // m.erase(m.begin());

    // Map elements
    cout << "Map elements: ";
    for (auto i : m)
        cout << i.first << "->" << i.second << " ";
    cout << endl;

    // 5. Check if map is empty -> will check if the map is empty - O(1)
    cout << "Is map empty? " << m.empty() << endl;

    // 6. Iterator to map -> will give the iterator to the map - O(log n)
    auto it = m.find(3);
    cout << "Iterator to 3: " << it->first << "->" << it->second << endl;

    return 0;
}