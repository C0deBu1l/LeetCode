#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  void MoveZeros(vector<int> &nums)
  {
    for(auto begin = nums.begin(), end = nums.end(); begin != end; ++begin){
      if(0 == *begin){
        for(auto cursor = begin + 1; cursor != end; ++cursor){
          if(*cursor != 0){
            auto temp = *begin;
            *begin = *cursor;
            *cursor = temp;
            break;
          }
        }
      }
    }
  }
};

int main(int argc, char **argv)
{
  Solution result;
  // vector<int> test = {0, 1, 0, 3, 12};
  vector<int> test = {12, 0, 0};

  result.MoveZeros(test);
  cout << "Result is " << endl;
  for(auto temp : test){
    cout << temp << endl;
  }

  return 0;
}
