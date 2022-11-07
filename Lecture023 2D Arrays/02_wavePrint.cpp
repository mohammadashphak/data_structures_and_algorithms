#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
  vector<int> ans;

  for (int col = 0; col < mCols; col++)
  {
    if (col & 1)
    {
      // odd Index -> Bottom to top
      for (int row = nRows - 1; row >= 0; row--)
      {
        ans.push_back(arr[row][col]);
      }
    }
    else
    {
      // 0 or even iondex -> top to bottom
      for (int row = 0; row < nRows; row++)
      {
        ans.push_back(arr[row][col]);
      }
    }

    // Time Complexity: O(n * m)
    // Space Complexity: O(n * m)
  }
  return ans;
}

int main()
{
  vector<vector<int>> arr = {{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};
  int nRows = 3, mCols = 3;

  vector<int> ans = wavePrint(arr, nRows, mCols);

  // print the ans vector
  for (int ele : ans)
  {
    cout << ele << " ";
  }
  cout << endl;
}