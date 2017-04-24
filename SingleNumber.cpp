#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int SingleNumber(vector<int>  &nums)
  {
    int result = nums[0];

    for(auto cursor = nums.cbegin(); cursor != nums.cend(); ++cursor){
      bool flag = true;
      for(auto position = cursor + 1; position != nums.cend(); ++position){
        if(*cursor == *position){
          flag = false;
          break;
        }
      }

      if(flag){
        result = *cursor;
      }
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  vector<int> test = {1, 3, 1, -1, 3};
  Solution result;

  cout << "The Result is " << result.SingleNumber(test) << endl;

  return 0;
}
