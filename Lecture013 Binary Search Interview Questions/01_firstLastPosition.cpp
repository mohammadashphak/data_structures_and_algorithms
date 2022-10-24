#include <iostream>
#include <vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> ans = {-1, -1};

    // first position
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans.first = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }

    // last position
    s = 0, e = n - 1;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans.second = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // First and Last Occurrence of an Element in a Sorted Array
    vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = arr.size();
    int k = 5;

    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << "first position of " << k << " is at index " << ans.first << "\nlast position of " << k << " is at index " << ans.second << endl;

    return 0;
}