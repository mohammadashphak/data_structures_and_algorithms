#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int rowIndex = 0;
        int colIndex = n - 1;

        while (rowIndex < m && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];
            if (element == target)
            {
                return true;
            }
            else if (element < target)
            {
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
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