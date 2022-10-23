#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    // distinct triplets
    vector<vector<int>> ans;
    // sort the array
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (i == 0 || (i > 0 && arr[i] != arr[i - 1]))
        {

            int j = i + 1;
            int k = n - 1;
            while (j < k)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == K)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);

                    while (j < k && arr[j] == arr[j + 1])
                        j++;
                    while (j > k && arr[k] == arr[k - 1])
                        k--;

                    j++;
                    k--;
                }
                else if (sum < K)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    // Triplets Sum

    // Case 1
    vector<int> arr = {10, 5, 5, 5, 2};
    int s = 12;

    vector<vector<int>> ans = findTriplets(arr, arr.size(), s);

    // print the ans
    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {

            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Case 2
    vector<int> arr2 = {1, 2, 3, 1, 2, 3};
    int s2 = 6;

    vector<vector<int>> ans2 = findTriplets(arr2, arr2.size(), s2);

    // print the ans
    if (ans2.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < ans2.size(); i++)
        {

            for (int j = 0; j < ans2[i].size(); j++)
            {
                cout << ans2[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Case 3
    vector<int> arr3 = {1, 2, 3, 4};
    int s3 = 11;

    vector<vector<int>> ans3 = findTriplets(arr3, arr3.size(), s3);

    // print the ans
    if (ans3.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < ans3.size(); i++)
        {

            for (int j = 0; j < ans3[i].size(); j++)
            {
                cout << ans3[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Case 4
    vector<int> arr4 = {1, 1, 2, 2, 1, 1};
    int s4 = 4;

    vector<vector<int>> ans4 = findTriplets(arr4, arr4.size(), s4);

    // print the ans
    if (ans4.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < ans4.size(); i++)
        {

            for (int j = 0; j < ans4[i].size(); j++)
            {
                cout << ans4[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}