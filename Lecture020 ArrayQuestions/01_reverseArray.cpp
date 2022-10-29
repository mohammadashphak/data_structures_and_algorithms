#include <iostream>
#include "vector"
using namespace std;

void reverseArray(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    while (s < e)
    {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }

    // Time Complexity: O(n)
    // Space Complexity: O(1)
}

int main(int argc, char const *argv[])
{
    // Reverse an array
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    reverseArray(arr);

    // Print the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}