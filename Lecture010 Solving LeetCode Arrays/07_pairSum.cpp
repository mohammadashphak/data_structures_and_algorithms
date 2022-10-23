#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // Pair Sum
    vector<int> arr = {1, 2, 3, 4, 5};
    int s = 5;
    
    vector<vector<int>> ans = pairSum(arr, s);

    // print the ans
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    vector<int> arr2 = {2, -3, 3, 3, -2};
    int s2 = 0;

    vector<vector<int>> ans2 = pairSum(arr2, s2);

    // print the ans
    for (int i = 0; i < ans2.size(); i++)
    {
        for (int j = 0; j < ans2[i].size(); j++)
        {
            cout << ans2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}