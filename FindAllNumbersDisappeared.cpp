#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> FindDisappearedNumbers(vector<int> &nums)
  {
    vector<int> result;
    vector<int> temp;

    for(size_t index = 0; index < nums.size(); ++index){
      temp.push_back(index + 1);
    }

    for(auto it = nums.begin(); it != nums.end(); ++it){
      temp[*it - 1] = 0;
    }

    for(auto it = temp.begin(); it != temp.end(); ++it){
      if(*it){
        result.push_back(*it);
      }
    }

    return result;
    // vector<int> result;
    //
    // for(size_t index = 0; index < nums.size(); ++index){
    //   result.push_back(index + 1);
    // }
    //
    // for(auto it = nums.begin(); it != nums.end(); ++it){
    //   result[*it - 1] = 0;
    // }
    //
    // for(auto it = result.begin(); it != result.end(); ){
    //   if(0 == *it){
    //     result.erase(it);
    //   }else{
    //     ++it;
    //   }
    // }
    //
    // return result;
  }
};

int main(int argc, char **argv)
{
  vector<int> test = {5, 4, 6, 7, 9, 3, 10, 9, 5, 6};

  Solution problem;
  vector<int> result = problem.FindDisappearedNumbers(test);
  cout << "Begin Output " << endl;
  for(auto i : result){
    cout << i << endl;
  }
  cout << "End Output" << endl;

  return 0;
}
