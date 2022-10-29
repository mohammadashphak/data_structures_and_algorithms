#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {

    // just to practice the modulus approach
    int n = nums.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {

      temp[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
      nums[i] = temp[i];
    }

    // Time Complexity: O(n)
    // Space Complexity: O(n)
  }
};

int main(int argc, char const *argv[])
{
  vector<int> nums = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};
  Solution s;

  s.rotate(nums, 4);

  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}