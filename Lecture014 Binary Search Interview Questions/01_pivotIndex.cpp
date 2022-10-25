#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int t = 0;
        for (int num : nums)
            t += num;
        int temp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == t - 2 * temp)
                return i;

            temp += nums[i];
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{
    // Pivot Index
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    int n = arr.size();

    Solution obj;

    cout << "pivot index is at index " << obj.pivotIndex(arr) << endl;

    return 0;
}