#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
  public: 
  int FindComplement(int num)
  {
    int findNumber = 0;
    int cursor = 0;
    while(num){
      if(!(num & 1)){
        findNumber += (int)pow(2, cursor);
      }

      num >>= 1;
      ++cursor;
    }

    return findNumber;
  }
};

int main(int argc, char **argv)
{
  Solution number;

  cout << number.FindComplement(1) << endl;
  cout << number.FindComplement(5) << endl;

  return 0;
}