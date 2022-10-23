#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // Method 1
    /*
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> arr2;
        for (int i = 0; i < arr.size(); i++)
        {
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] == arr[i])
                {
                    arr.erase(arr.begin() + j);
                    count++;
                    j--;
                }
            }
            
            arr2.push_back(count);
        }
        
        for (int i = 0; i < arr2.size(); i++)
        {
            for (int j = i + 1; j < arr2.size(); j++)
            {
                if (arr2[j]  == arr2[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
    */

    // Method 2 (some more efficient)
    bool uniqueOccurrences(vector<int> &arr)
    {
        int i = 0;
        sort(arr.begin(), arr.end());
        vector<int> ans;
        while (i < arr.size())
        {
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }
            ans.push_back(count);
            i = i + count;
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] == ans[i + 1])
                return false;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    cout << Solution().uniqueOccurrences(arr) << endl;
    return 0;
}