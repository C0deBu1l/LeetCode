#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
  string ReverseString(string s){
    auto len = s.size();
    auto begin = 0;
    auto end = len - 1;
    while(begin <= end){
      auto temp = s[begin];
      s[begin++] = s[end];
      s[end--] = temp;
    }
    return s;

    // string result;
    // for(auto it = s.crbegin(); it != s.crend(); ++it){
    //   result.push_back(*it);
    // }
    // return result;
  }
};

int main(int argc, char **argv)
{
  Solution reverse;
  string result = reverse.ReverseString("hellos");
  cout << result << endl;

  return 0;
}
