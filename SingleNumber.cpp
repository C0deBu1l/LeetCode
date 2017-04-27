#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int SingleNumber(vector<int> &nums)
  {
    int result = 0;

    if(1 == nums.size()){
      result = nums[0];
    }else{
      QuickSort(nums, 0, nums.size() -1);

      cout << endl;
      for(auto i : nums){
        cout << i << endl;
      }
      cout << endl;

      for(auto cursor = nums.cbegin(); cursor != nums.cend(); cursor += 2){
        if(*cursor != *(cursor + 1)){
          result = *cursor;
          break;
        }
      }
    }

    return result;
  }

  void QuickSort(vector<int> &s, int left, int right)
  {
    if(left < right){
      int begin = left, end = right, cursor = s[left];
      while(begin < end){
        while(begin < end && s[end] >= cursor) // 从右向左找第一个小于x的数
          --end;
        if(begin < end)
          s[begin++] = s[end];

        while(begin < end && s[begin] < cursor) // 从左向右找第一个大于等于x的数
          ++begin;
        if(begin < end)
          s[end--] = s[begin];
      }
      s[begin] = cursor;
      QuickSort(s, left, begin - 1); // 递归调用
      QuickSort(s, begin + 1, right);
    }
  }
};

int main(int argc, char **argv)
{
  // vector<int> test = {1, 3, 1, -1, 3};
  // vector<int> test = {1, 2, 2, 3, 3};
  // vector<int> test = {1, 1, 2, 2, 3};
  vector<int> test = {2, 2, 1};
  Solution result;

  cout << "The Result is " << result.SingleNumber(test) << endl;

  return 0;
}
