#include <iostream>
#include "string"
using namespace std;

class Solution
{
public:
  string removeDuplicates(string s)
  {
    string result;
    for (int i = 0; i < s.size(); i++)
    {
      if (result.size() == 0)
      {
        result.push_back(s[i]);
      }
      else
      {
        if (result.back() == s[i])
        {
          result.pop_back();
        }
        else
        {
          result.push_back(s[i]);
        }
      }
    }
    return result;
  }
};

int main()
{
  string str = "abbaca";
  Solution s;
  cout << s.removeDuplicates(str) << endl;
  return 0;
}