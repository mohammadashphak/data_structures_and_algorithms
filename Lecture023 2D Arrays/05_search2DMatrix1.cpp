#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    // Method 1: Brute force
    // Time complexity: O(m*n)
    // Space complexity: O(1)
    /*
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == target)
                return true;
        }
    }
    return false;
    */

    // Method 2: Binary search
    // Time complexity: O(log(m*n))
    // Space complexity: O(1)
    int m = matrix.size();
    int n = matrix[0].size();
    int low = 0;
    int high = m * n - 1;
    while (low <= high)
    {
      int mid = low + (high - low) / 2;
      int midElement = matrix[mid / n][mid % n];
      
      if (midElement == target)
        return true;
      else if (midElement < target)
        low = mid + 1;
      else
        high = mid - 1;
    }
    return false;
  }
};

int main()
{
  vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int target = 3;
  Solution s;
  cout << s.searchMatrix(matrix, target) << endl;
  return 0;
}