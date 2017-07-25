#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
  vector<int> twoSum(vector<int> &numbers, int target)
  {
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
      int differ = target - numbers[i];
      for(int j = i + 1; ((j < numbers.size()) && (numbers[j] <= differ)); ++j){
        if(numbers[j] == differ){
          result.push_back(i + 1);
          result.push_back(j + 1);
          break;
        }
      }
      
      if(result.size()){
        break;
      }
    }
    
    return result;
  }
};

int main(int argc, char **argv)
{
  vector<int> numbers{2, 7, 11, 15};
  int target = 9;

  Solution object;
  vector<int> result = object.twoSum(numbers, target);
  for(int i = 0; i < result.size(); ++i){
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}