#include <iostream>
#include <vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // Array Inrersection
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9};
    vector<int> arr2 = {2, 4, 6, 8, 8, 10, 12, 14, 16, 18};
    vector<int> ans = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    // print the ans
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}