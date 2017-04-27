#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
  bool DetectCapitial(string word)
  {
    int upper = 0;
    int lower = 0;
    for(int index = 0; index < word.size(); ++index){
      if(word[index] >= 'A' && word[index] <= 'Z'){
        ++upper;
      }else{
        ++lower;
      }
    }

    bool flag = false;
    if((word[0] >= 'A' && word[0] <= 'Z') && ((upper == 1) || (upper == word.size()))){
      flag = true;
    }else if(lower == word.size()){
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
