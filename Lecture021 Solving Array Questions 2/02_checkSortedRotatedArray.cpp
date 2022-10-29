#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int exCase = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > nums[(i + 1) % nums.size()])
            {
                exCase++;
            }
        }
        if (exCase == 0 && nums[0] == nums[nums.size() - 1])
            exCase++;
        if (exCase == 1)
            return true;
        else
            return false;
        
        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};

int main(int argc, char const *argv[])
{
    // Check if array is sorted and rotated
    vector<int> nums = {3, 4, 5, 1, 2};
    Solution obj;
    cout << obj.check(nums) << endl;

    return 0;
}