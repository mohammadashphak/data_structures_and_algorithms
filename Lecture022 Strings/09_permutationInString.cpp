#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
    bool areVectorsEqual(vector<int> a, vector<int> b)
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        if (s2.size() < s1.size())
            return false;

        // charactes count in s1
        vector<int> freqS1(26, 0);
        for (char c : s1)
            freqS1[c - 'a']++;

        // characters count in s2
        vector<int> freqS2(26, 0);
        int i = 0, j = 0;

        while (j < s2.size())
        {
            freqS2[s2[j] - 'a']++;

            // if window size is equals to s1
            if (j - i + 1 == s1.size())
            {
                if (areVectorsEqual(freqS1, freqS2))
                    return true;
            }
            // if window size is greater than s1
            if (j - i + 1 < s1.size())
                j++;
            // slide the window
            else
            {
                freqS2[s2[i] - 'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[])
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    Solution obj;
    cout << obj.checkInclusion(s1, s2) << endl;
    return 0;
}