#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    vector<int> ans;
    int rowStart = 0;
    int rowEnd = matrix.size() - 1;
    int colStart = 0;
    int colEnd = matrix[0].size() - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
      // print starting row
      for (int i = colStart; i <= colEnd; i++)
      {
        ans.push_back(matrix[rowStart][i]);
      }
      rowStart++;

      // print ending column
      for (int i = rowStart; i <= rowEnd; i++)
      {
        ans.push_back(matrix[i][colEnd]);
      }
      colEnd--;

      // print ending row
      for (int i = colEnd; i >= colStart && rowStart <= rowEnd; i--)
      {
        ans.push_back(matrix[rowEnd][i]);
      }
      rowEnd--;

      // print starting column
      for (int i = rowEnd; i >= rowStart && colStart <= colEnd; i--)
      {
        ans.push_back(matrix[i][colStart]);
      }
      colStart++;
    }
    return ans;
  }
};

int main()
{
  // vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
  Solution obj;
  vector<int> ans = obj.spiralOrder(matrix);

  // print the answer
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}