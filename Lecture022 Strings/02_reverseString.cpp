#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int st = 0;
        int e = s.size() - 1;

        while (st < e)
        {
            swap(s[st++], s[e--]);
        }
    }
};

int main(int argc, char const *argv[])
{
    // Reverse a string
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution obj;
    obj.reverseString(s);

    // print the string
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << "";
    }
    cout << endl;
    return 0;
}
