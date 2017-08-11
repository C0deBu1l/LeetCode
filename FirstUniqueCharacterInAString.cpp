#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
  int firstUniqueCharacter(string s)
  {
    int result = -1;
    int characterIndex[26] = {0};

    int index = 0;
    for(int i = 0; i < s.size(); ++i){
      index = s[i] % 'a';
      ++characterIndex[index];
    }

    for(int i = 0; i < 26; ++i){
      if(characterIndex[i] == 1){
        int position = findCharacterPosition((char)('a' + i), s);
        if((position < result) || (result == -1)){
          result = position;
        }
      }
    }

    return result;
  }

  int findCharacterPosition(char cursor, string s)
  {
    int position = -1;
    for(int i = 0; i < s.size(); ++i){
      if(s[i] == cursor){
        position = i;
        break;
      }
    }

    return position;
  }
};

int main(int argc, char **argv)
{
  string s = "loveleetcode";

  Solution object;
  cout << "output is " << object.firstUniqueCharacter(s) << endl;

  return 0;
}