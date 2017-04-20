#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<string> Fizzbuzz(int n)
  {
    vector<string> result;
    for(int i = 1; i <= n; ++i){
      if(i % 15 == 0){
        result.push_back("FizzBuzz");
      }else if(i % 3 == 0){
        result.push_back("Fizz");
      }else if(i % 5 == 0){
        result.push_back("Buzz");
      }else{
        result.push_back(to_string(i));
      }
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  Solution list;
  vector<string> result = list.Fizzbuzz(15);
  for(auto n : result){
    cout << n << endl;
  }

  return 0;
}
