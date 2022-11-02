#include <string>
#include <iostream>
using namespace std;

string replaceSpaces(string &str)
{
    // with creating a new string
    // string temp = "";

    // for(int i=0; i<str.length(); i++) {
    //     if(str[i] == ' '){
    //         temp.push_back('@');
    //         temp.push_back('4');
    //         temp.push_back('0');
    //     }
    //     else
    //     {
    //         temp.push_back(str[i]);
    //     }
    // }
    // return temp;

    // without creating a new string
    int oldLength = str.length();
    int spaces = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
    }
    int newLength = str.length() + 2 * spaces;
    str.resize(newLength);

    int j = newLength - 1;

    for (int i = oldLength - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[j] = '0';
            str[j - 1] = '4';
            str[j - 2] = '@';
            j -= 3;
        }
        else
        {
            str[j] = str[i];
            j--;
        }
    }
    return str;
}

int main(int argc, char const *argv[])
{
    // Replace Spaces with @40
    string s = "This is a test string";
    cout << replaceSpaces(s) << endl;
    return 0;
}