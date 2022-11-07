#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {
    // Method 1: Transpose and reverse
    // First take the transpose of the matrix
    for (int i = 0; i < matrix.size(); i++)
    {
      for (int j = i; j < matrix[0].size(); j++)
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
    // Then reverse each row of the matrix
    for (int i = 0; i < matrix.size(); i++)
    {
      reverse(matrix[i].begin(), matrix[i].end());
    }

    // Method 2: Rotate 4 rectangles
    /*
    int n = matrix.size();
    for (int i = 0; i < n / 2; i++)
    {
      for (int j = i; j < n - i - 1; j++)
      {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[n - j - 1][i];
        matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
        matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
        matrix[j][n - i - 1] = temp;
      }
    }
    */
  }
};

int main()
{
  // Rotate a 2D array 90 degrees clockwise
  vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
  Solution s;
  s.rotate(matrix);

  // print the rotated array
  for (int i = 0; i < matrix.size(); i++)
  {
    for (int j = 0; j < matrix[0].size(); j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}