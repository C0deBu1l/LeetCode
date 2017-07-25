#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
  int maxCount(int m, int n, vector<vector<int>> &ops)
  {
    int max = m * n;
    if(ops.size()){
      int minRow = ops[0][0];
      int minCol = ops[0][1];
      for(auto cursor = ops.cbegin(); cursor != ops.cend(); ++cursor){
        auto temp = *cursor;
        minRow = (temp[0] < minRow) ? temp[0] : minRow;
        minCol = (temp[1] < minCol) ? temp[1] : minCol;
      }

      max = minRow * minCol;
    }

    return max;
  }
};

int main(int argc, char **argv)
{
  int n = 3, m = 3;
  vector<vector<int>> operations = {};

  Solution solution;
  int max = solution.maxCount(m, n, operations);

  cout << "max is " << max << endl;

  return 0;
}