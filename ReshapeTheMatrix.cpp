#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<vector<int>> MatrixReshape(vector<vector<int>> &nums, int r, int c)
  {
    vector<vector<int>> result = {};

    size_t row = nums.size();
    size_t col = nums[0].size();
    if((row * col) != (r * c)){
      result = nums;
    }else{
      size_t cursor = 0;
      vector<int> temp = {};
      for(auto i : nums){
        for(auto j : i){
          temp.push_back(j);
          ++cursor;

          if(cursor == c){
            result.push_back(temp);
            temp = {};
            cursor = 0;
          }
        }
      }
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  Solution resultInstance;
  vector<vector<int>> result;
  vector<vector<int>> test = {{1, 2}, {3, 4}};

  result = resultInstance.MatrixReshape(test, 1, 4);
  cout << "Begin Result" << endl;
  for(auto row : result){
    for(auto col : row){
      cout << col << " ";
    }
    cout << endl;
  }
  cout << "End Result" << endl;

  return 0;
}
