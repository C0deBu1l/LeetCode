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
      bool existFlag = false;
      unsigned int exist = -1;

      for(auto cursor = 0; cursor < numsLength; ++cursor){
        if(nums[cursor] == findNums[position]){
          existFlag = true;
        }

        if((nums[cursor] > findNums[position]) && existFlag){
          exist = nums[cursor];
          break;
        }
      }

      result.push_back(exist);
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
