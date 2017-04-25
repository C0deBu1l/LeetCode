#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
  char FindTheDifference(string s, string t)
  {
    char result = ' ';

    int countS[26] = {0};
    for(size_t cursor = 0; cursor < s.length(); ++cursor){
      ++countS[s[cursor] - 'a'];
    }

    int countT[26] = {0};
    for(size_t cursor = 0; cursor < t.length(); ++cursor){
      ++countT[t[cursor] - 'a'];
    }

    for(size_t cursor = 0; cursor < 26; ++cursor){
      if(countS[cursor] != countT[cursor]){
        result = 'a' + cursor;
      }
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  string s = "abcd";
  string t = "abcde";
  Solution result;

  cout << "Result is " << result.FindTheDifference(s, t) << endl;

  return 0;
}
