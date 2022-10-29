#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1, e = m + n - 1;

        while (j >= 0 && e >= 0)
        {
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[e] = nums1[i];
                i--;
            }
            else
            {
                nums1[e] = nums2[j];
                j--;
            }
            e--;
        }

        // Time Complexity: O(m)
        // Space Complexity: O(1)
    }
};

int main(int argc, char const *argv[])
{
    Solution s;

    // Case 1
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int n1 = nums2.size();
    int m1 = nums1.size() - n1;

    s.merge(nums1, m1, nums2, n1);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;

    // Case 2
    vector<int> nums3 = {1};
    vector<int> nums4 = {};
    int n2 = nums4.size();
    int m2 = nums3.size() - n2;

    s.merge(nums3, m2, nums4, n2);

    for (int i = 0; i < nums3.size(); i++)
    {
        cout << nums3[i] << " ";
    }
    cout << endl;

    // Case 3
    vector<int> nums5 = {0};
    vector<int> nums6 = {1};
    int n3 = nums6.size();
    int m3 = nums5.size() - n3;

    s.merge(nums5, m3, nums6, n3);

    for (int i = 0; i < nums5.size(); i++)
    {
        cout << nums5[i] << " ";
    }
    cout << endl;

    // Case 4
    vector<int> nums7 = {3, 4, 4, 5, 6, 0};
    vector<int> nums8 = {1};

    int n4 = nums8.size();
    int m4 = nums7.size() - n4;

    s.merge(nums7, m4, nums8, n4);

    for (int i = 0; i < nums7.size(); i++)
    {
        cout << nums7[i] << " ";
    }
    cout << endl;

    return 0;
}