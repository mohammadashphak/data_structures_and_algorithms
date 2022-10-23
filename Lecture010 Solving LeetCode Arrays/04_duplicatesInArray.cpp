#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // XOR ing all array elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR [1, n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10};
    cout << findDuplicate(arr) << endl;
    return 0;
}