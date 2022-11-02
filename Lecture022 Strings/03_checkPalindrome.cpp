#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string st, int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        // consider only alphabets and numbers
        if (!((st[s] >= 'a' && st[s] <= 'z') || (st[s] >= 'A' && st[s] <= 'Z') || (st[s] >= '0' && st[s] <= '9')))
        {
            s++;
            continue;
        }
        if (!((st[e] >= 'a' && st[e] <= 'z') || (st[e] >= 'A' && st[e] <= 'Z') || (st[e] >= '0' && st[e] <= '9')))
        {
            e--;
            continue;
        }

        if (toLowerCase(st[s]) != toLowerCase(st[e]))
        {
            return false;
        }
        s++;
        e--;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    // Check Palindrome. consider only alphabets and numbers
    string st = "a?b?#6cd@ed!c?6b?a";
    int n = st.length();
    if (checkPalindrome(st, n))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}