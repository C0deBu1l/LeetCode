#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> NextGreaterElement(vector<int>& findNums, vector<int>& nums)
  {
    vector<int> result;
    auto findLength = findNums.size();
    auto numsLength = nums.size();
    for(auto position = 0; position < findLength; ++position){
      auto existFlag = -1;
      for(auto cursor = position; cursor < numsLength; ++cursor){
        if(nums[cursor] > findNums[position]){
          existFlag = nums[cursor];
          break;
        }
      }

      result.push_back(existFlag);
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  Solution test;
  vector<int> findNums = {4, 1, 2};
  vector<int> nums = {1, 3, 4, 2};
  // output -1, 3, 4 expected -1, 2, 3
  vector<int> result = test.NextGreaterElement(findNums, nums);
  for(auto c : result){
    cout << c << endl;
  }

  return 0;
}
