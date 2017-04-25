#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
  bool DetectCapitial(string word)
  {
    bool flag = false;
    int upper = 0;
    int lower = 0;
    int length = word.size();
    for(int index = 0; index < length; ++index){
      if(word[index] >= 'A' && word[index] <= 'Z'){
        ++upper;
      }else{
        ++lower;
      }
    }

    if((word[0] >= 'A' && word[0] <= 'Z') && ((upper == 1) || (upper == length))){
      flag = true;
    }else if(lower == length){
      flag = true;
    }else{

    }

    return flag;
  }
};

int main(int argc, char **argv)
{
  string test = "Leetcode";
  Solution capitial;
  cout << "Result is " << capitial.DetectCapitial(test) << endl;

  return 0;
}
