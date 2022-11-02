#include <iostream>
#include <string>
using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        // lowercase
        int number = s[i] - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

int main(int argc, char const *argv[])
{
    // Maximum Occuring Character
    string s = "testsample";
    cout << getMaxOccCharacter(s) << endl;
    return 0;
}