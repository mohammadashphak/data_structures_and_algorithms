#include <iostream>
#include "vector"
using namespace std;

class Solution
{
public:
  int compress(vector<char> &chars)
  {
    int i = 0;
    int ansIndex = 0;
    while (i < chars.size())
    {
      int count = 0;
      char c = chars[i];
      while (i < chars.size() && chars[i] == c)
      {
        i++;
        count++;
      }
      // store the character
      chars[ansIndex++] = c;

      // store the count
      if (count > 1)
      {
        // convert the count to string so that if count is 100, we can store 1, 0, 0
        string s = to_string(count);
        for (char c : s)
        {
          chars[ansIndex++] = c;
        }
      }
    }
    return ansIndex;
  }
};

int main(int argc, char const *argv[])
{
  vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
  Solution s;
  cout << s.compress(chars) << endl;
  return 0;
}