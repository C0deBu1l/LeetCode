#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution
{
public:
  int distributeCandies(vector<int> &candies)
  {
    set<int> only;
    for(int i = 0; i < candies.size(); ++i){
      only.insert(candies[i]);
    }

    int max = (int)(candies.size() / 2);
    if(only.size() < max){
      max = only.size();
    }

    return max;
  }
};

int main(int argc, char **argv)
{
  vector<int> candies{1, 1, 2, 2, 3, 3};

  Solution result;
  cout << "sister can get maximum candies " << result.distributeCandies(candies) << endl;

  return 0;
}
