#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> arr;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i+1])
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};


int main(int argc, char const *argv[])
{
    vector <int> arr = {4,3,2,7,8,2,3,1};
    Solution obj;
    vector <int> ans = obj.findDuplicates(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}