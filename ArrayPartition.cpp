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

  void QuickSort(vector<int> &s, int l, int r)
  {
    if(l < r){
      int i = l, j = r, x = s[l];
      while(i < j){
        while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
          j--;
        if(i < j)
          s[i++] = s[j];

        while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
          i++;
        if(i < j)
          s[j--] = s[i];
      }
      s[i] = x;
      QuickSort(s, l, i - 1); // 递归调用
      QuickSort(s, i + 1, r);
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
