#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {5, 3, 6, 2, 4, 9, 10, 8, 7, 1};

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 1. Sort -> will sort the vector in ascending order - O(nlogn)
    sort(v.begin(), v.end());

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 2. Sort in descending order -> will sort the vector in descending order - O(nlogn)
    sort(v.begin(), v.end(), greater<int>());

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 3. Reverse -> will reverse the vector - O(n)
    reverse(v.begin(), v.end());

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 4. Rotate -> will rotate the vector by 3 positions - O(n)
    rotate(v.begin(), v.begin() + 3, v.end()); // rotate by 3

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 5. Shuffle -> will shuffle the vector - O(n)
    random_shuffle(v.begin(), v.end());

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 6. Find -> will find the element in the vector - O(n)
    auto it = find(v.begin(), v.end(), 5);
    cout << "5 Found at position: " << it - v.begin() << endl;

    // 7. Count -> will count the number of occurences of the element in the vector - O(n)
    cout << "Count of 5: " << count(v.begin(), v.end(), 5) << endl;

    // 8. Min and Max -> will find the minimum and maximum element in the vector - O(n)
    cout << "Min: " << *min(v.begin(), v.end()) << endl;
    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;

    // 9. Binary Search -> will search the element in the vector - O(logn)
    // work in sorted vector
    sort(v.begin(), v.end());
    cout << "Is 5 present? " << binary_search(v.begin(), v.end(), 5) << endl;

    // 10. Lower bound and Upper bound -> will find the lower and upper bound of the element in the vector - O(logn)
    auto it1 = lower_bound(v.begin(), v.end(), 5);
    auto it2 = upper_bound(v.begin(), v.end(), 5);
    cout << "Lower bound: " << *it1 << endl;
    cout << "Upper bound: " << *it2 << endl;

    // 11. Next permutation -> will find the next permutation of the vector - O(n)
    cout << "Next permutation: " << next_permutation(v.begin(), v.end()) << endl;

    // 12. Previous permutation -> will find the previous permutation of the vector - O(n)
    cout << "Previous permutation: " << prev_permutation(v.begin(), v.end()) << endl;

    // 13. Distance -> will find the distance between two iterators - O(1)
    cout << "Distance: " << distance(v.begin(), v.end()) << endl;

    // 14. Fill -> will fill the vector with the given element - O(n)
    fill(v.begin(), v.end(), 5);

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 15. Generate -> will generate the vector with the given function - O(n)
    generate(v.begin(), v.end(), []()
             { return rand() % 10; });

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 16. Replace -> will replace the element in the vector - O(n)
    replace(v.begin(), v.end(), 5, 10);

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 17. Remove -> will remove the element from the vector - O(n)
    // remove(v.begin(), v.end(), 10); // will not change the size of array and will not remove the element from the vector but will return the iterator to the next element
    v.erase(remove(v.begin(), v.end(), 10), v.end()); // will remove the element from the vector

    cout << "Vector elements: ";
    // vector elements
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 18. Unique -> will remove the duplicate elements from the vector - O(n)
    sort(v.begin(), v.end());
    // unique(v.begin(), v.end()); // will not change the size of the vector and will remove the duplicate elements when they are adjacent
    v.erase(unique(v.begin(), v.end()), v.end()); // will change the size of the vector and will remove the duplicate elements when they are adjacent

    // vector elements
    cout << "Vector elements: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    // 19. Accumulate -> will accumulate the elements of the vector - O(n)
    cout << "Accumulate: " << accumulate(v.begin(), v.end(), 0) << endl;

    int a = 10;
    int b = 20;

    // 1. Swap -> will swap the elements - O(1)
    swap(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // 2. Min and Max -> will find the minimum and maximum element - O(1)
    cout << "Min: " << min(a, b) << endl;
    cout << "Max: " << max(a, b) << endl;

    // 3. Abs -> will find the absolute value of the element - O(1)
    cout << "Abs: " << abs(a) << endl;

    // 4. GCD -> will find the gcd of the elements - O(logn)
    cout << "GCD: " << __gcd(a, b) << endl;

    // 5. LCM -> will find the lcm of the elements - O(logn)
    cout << "LCM: " << (a * b) / __gcd(a, b) << endl;

    string s = "Hello World";

    // 1. Reverse -> will reverse the string - O(n)
    reverse(s.begin(), s.end());

    cout << "String: " << s << endl;

    // 2. Sort -> will sort the string - O(nlogn)
    sort(s.begin(), s.end());

    cout << "String: " << s << endl;

    // 3. Rotate -> will rotate the string - O(n)
    rotate(s.begin(), s.begin() + 2, s.end());

    cout << "String: " << s << endl;

    // 4. Shuffle -> will shuffle the string - O(n)
    random_shuffle(s.begin(), s.end());

    cout << "String: " << s << endl;

    return 0;
}