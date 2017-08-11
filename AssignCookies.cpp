#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int findContentChildren(vector<int> &g, vector<int> &s)
  {
    int result = 0;

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int cursor = 0;
    for(int i = 0; i < g.size(); ++i){
      while(cursor < s.size()){
        if(g[i] <= s[cursor]){
          ++result;
          ++cursor;
          break;
        }else{
          ++cursor;
        }
      }
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  vector<int> g{1, 2, 3};
  vector<int> s{1, 1};

  Solution object;
  cout << "output is " << object.findContentChildren(g, s) << endl;
  
  return 0;
}