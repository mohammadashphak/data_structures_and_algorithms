#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    void reverse(vector <char> & s, int first, int last)
    {
        while (first < last)
        {
            swap(s[first], s[last]);
            first++;
            last--;
        }
    }

public:
    void reverseWords(vector<char> & s)
    {
        int n = s.size();
        int start = 0;
        int end = 0;

        // reverse the whole string
        reverse(s, 0, n - 1);

        // reverse each word
        while (end < n)
        {
            if (s[end] == ' ')
            {
                reverse(s, start, end - 1);
                start = end + 1;
            }
            end++;
        }

        // reverse the last word
        reverse(s, start, end - 1);
    }
};

int main(int argc, char const *argv[])
{
    // Reverse Words in a String
    vector<char> s = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    Solution obj;
    obj.reverseWords(s);

    // print string
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}