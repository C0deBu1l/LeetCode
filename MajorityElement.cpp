#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    if(nums.size() == 1){
      return nums[0];
    }

    sort(nums.begin(), nums.end());

    int count = 1;
    int maxCount = 0;
    int index = nums[0];
    int result = nums[0];
    for(int i = 1; i < nums.size(); ++i){
      if(index == nums[i]){
        ++count;
      }else{
        if(count > maxCount){
          maxCount = count;
          result = nums[i - 1];
          count = 1;
        }

        index = nums[i];
      }
    }

    if(count > maxCount){
      result = nums[nums.size() - 1];
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  Solution object;
  vector<int> nums = {1, 3, 3, 2, 5, 6, 5, 5, 5, 7, 5, 3, 4};

  cout << "Result is " << object.majorityElement(nums) << endl;

  return 0;
}