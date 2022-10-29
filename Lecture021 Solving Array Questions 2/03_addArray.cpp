#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverse(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{

    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // second case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // print(ans);
    return reverse(ans);

    // Time Complexity: O(n)
    // Space Complexity: O(1)
}

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {4, 5, 9};
    vector<int> nums2 = {7, 4, 5};
    vector<int> ans = findArraySum(nums1, nums1.size(), nums2, nums2.size());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "";
    }
    cout << endl;
    return 0;
}