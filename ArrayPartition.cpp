#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int ArrayPairSum(vector<int> &nums)
  {
    int result = 0;
    QuickSort(nums, 0, nums.size() - 1);
    for(auto cursor = nums.cbegin(); cursor != nums.cend(); cursor += 2){
      result += *cursor;
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
  vector<int> test = {-1, 4, -3, 2};
  Solution result;

  cout << "Result is " << result.ArrayPairSum(test) << endl;

  return 0;
}
