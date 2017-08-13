#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    // if(ransomNote == magazine){
    //   return true;
    // }

    // const int SIZE = magazine.size();
    // int cursorArray[SIZE];
    // for(int i = 0; i < SIZE; ++i){
    //   cursorArray[i] = 0;
    // }

    // for(int i = 0; i < ransomNote.size(); ++i){
    //   for(int j = 0; j < magazine.size(); ++j){
    //     if((ransomNote[i] == magazine[j]) && !cursorArray[j]){
    //       cursorArray[j] = 1;
    //       break;
    //     }
    //   }
    // }

    // int result = 0;
    // for(int i = 0; i < SIZE; ++i){
    //   if(cursorArray[i]){
    //     ++result;
    //   }
    // }

    // if(result == ransomNote.size()){
    //   return true;
    // }else{
    //   return false;
    // }

    int magazineStatistic[26] = {0};

    int cursor = 0;
    for(int i = 0; i < magazine.size(); ++i){
      cursor = magazine[i] - 'a';
      ++magazineStatistic[cursor];
    }

    for(int i = 0; i < ransomNote.size(); ++i){
      cursor = ransomNote[i] - 'a';
      --magazineStatistic[cursor];
    }

    for(int i = 0; i < 26; ++i){
      if(magazineStatistic[i] < 0){
        return false;
      }
    }

    return true;
  }
};

int main(int argc, char **argv)
{
  Solution object;

  cout << "Result is " << object.canConstruct("bg", "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj") << endl;
  // cout << "Result is " << object.canConstruct("aa", "ab") << endl;
  // cout << "Result is " << object.canConstruct("fffbfgz", "effjfggbffjdgbjjhhdeghz") << endl;

  return 0;
}