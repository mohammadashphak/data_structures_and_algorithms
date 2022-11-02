#include <iostream>
using namespace std;
#include <string>
using namespace std;

class Solution
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }

        return 0;
    }

    char toLowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string a)
    {
        int s = 0;
        int e = a.length() - 1;

        while (s <= e)
        {
            if (a[s] != a[e])
            {
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {

        // remove unnecceary characters
        string temp = "";

        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        // convert to lowercase
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }

        // check palindrome
        return checkPalindrome(temp);
    }
};

int main(int argc, char const *argv[])
{
    // Check Palindrome. consider only alphabets and numbers
    string st = "A man, a plan, a canal: Panama";
    Solution obj;

    cout << obj.isPalindrome(st) << endl;

    return 0;
}