#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
  int FindLUSlength(string a, string b)
  {
    int result = -1;

    if(a != b){
      result = (a.length() > b.length()) ? a.length() : b.length();
    }

    // string reverseSequenceA;
    // for(int index = a.length() - 1; index > -1; --index){
    //   reverseSequenceA += a[index];
    // }
    //
    // string reverseSequenceB;
    // for(int index = b.length() - 1; index > -1; --index){
    //   reverseSequenceB += b[index];
    // }
    //
    // bool equalCompare = false;
    // string uncommonSequenceA;
    // for(int index = 0; index < a.length(); ++index){
    //   if(a[index] == reverseSequenceA[index]){
    //     equalCompare = true;
    //   }else{
    //     equalCompare = false;
    //     uncommonSequenceA = ' ';
    //   }
    //
    //   if(equalCompare){
    //     uncommonSequenceA += a[index];
    //   }
    // }
    //
    // equalCompare = false;
    // string uncommonSequenceB;
    // for(int index = 0; index < b.length(); ++index){
    //   if(b[index] == reverseSequenceB[index]){
    //     equalCompare = true;
    //   }else{
    //     equalCompare = false;
    //     uncommonSequenceB = ' ';
    //   }
    //
    //   if(equalCompare){
    //     uncommonSequenceB += b[index];
    //   }
    // }
    //
    // if(uncommonSequenceA != uncommonSequenceB){
    //   result = (uncommonSequenceA.length() > uncommonSequenceB.length()) ? uncommonSequenceA.length() : uncommonSequenceB.length();
    // }

    return result;
  }
};

int main(int argc, char **argv)
{
  Solution result;
  // result.FindLUSlength("aba", "cdc");
  cout << "Result (aba, cdc) is " << result.FindLUSlength("aaa", "cdc") << endl;

  return 0;
}

// abcdedcss
// sscdedcba
