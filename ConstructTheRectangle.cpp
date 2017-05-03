#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> ConstructRectangle(int area)
  {
    vector<int> result;

    int width = 0;
    int height = 0;
    int splitData[2] = {area, 1};
    for(int cursor = area / 2; cursor > 1; --cursor){
      if((0 == (area % cursor)) && (cursor >= (area / cursor))){
        height = cursor;
        width = area / cursor;

        if((height - width) < (splitData[0] - splitData[1])){
          splitData[0] = height;
          splitData[1] = width;
        }
      }
    }

    result.push_back(splitData[0]);
    result.push_back(splitData[1]);

    return result;
  }

};

int main(int argc, char **argv)
{
  Solution resultInstance;
  vector<int> result;

  result = resultInstance.ConstructRectangle(4);
  cout << "Result" << endl;
  for(auto temp : result){
    cout << temp << endl;
  }
  cout << "End Result" << endl;

  return 0;
}
