#include <iostream>
#include <vector>
using namespace std;

int findPosition(vector<int> &arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
            return mid;

        if (arr[s] <= arr[mid])
        {
            if (arr[s] <= k && k <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= k && k <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    // Search element in rotated array
    vector <int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();
    int k = 0;

    cout << findPosition(arr, n, k) << endl;

    return 0;
}