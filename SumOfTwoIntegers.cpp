#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
  int GetSum(int a, int b)
  {
    long int tempA = (long)a;
    long int tempB = (long)b;

    int flag = 0;
    int result = 0;
    bool symbol = false;
    if((tempA < 0) && (tempB < 0)){
      symbol = true;
      tempA = ~tempA + 1;
      tempB = ~tempB + 1;
    }else if((tempA < 0) && (tempB > 0)){
      if(-tempA > tempB){
        symbol = true;
        tempA = ~tempA + 1;
        tempB = ~tempB + 1;
      }
    }else if((tempA > 0) && (tempB < 0)){
      if(-tempB > tempA){
        symbol = true;
        tempA = ~tempA + 1;
        tempB = ~tempB + 1;
      }
    }else{

    }

    for(int i = 0; i < sizeof(tempA) * 8; ++i){
      if((tempA & 1) && (tempB & 1)){
        if(flag){
          result += pow(2, i);
        }else{
          flag = 1;
        }
      }else if((tempA & 1) || (tempB & 1)){
        if(!flag){
          result += pow(2, i);
        }
      }else{
        if(flag){
          result += pow(2, i);
          flag = 0;
        }
      }

      tempA >>= 1;
      tempB >>= 1;
    }

    if(symbol){
      result = ~result + 1;
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  Solution result;
  cout << "-12 + -2 " << result.GetSum(-12, -2) << endl;
  cout << "2147483647 + -2147483648 " << result.GetSum(2147483647, -2147483648) << endl;
  return 0;
}
