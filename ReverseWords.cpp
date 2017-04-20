#include <iostream>
#include <string>

using namespace std;

class Solution
{
  public: 
  string ReverseWords(string s)
  {
    string reverse;
    
    string reverseTemp;
    for(auto temp: s){
      if(isspace(temp)){
        reverse += (reverseTemp + " ");
        reverseTemp = "";
      }else{
        reverseTemp = temp + reverseTemp;
      }
    }
    reverse = reverse + reverseTemp;

    return reverse;
  }
};

int main(int argc, char **argv)
{
  Solution reverse;
  string result = reverse.ReverseWords("Let's take LeetCode contest");
  cout << result << endl;

  return 0;
}