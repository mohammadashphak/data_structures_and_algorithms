#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0;
        while (i < nums.size() && j < nums.size())
        {
            if (nums[j] == 0)
            {
                j++;
            }
            else
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};
    Solution s;
    s.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}