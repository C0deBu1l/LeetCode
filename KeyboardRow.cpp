#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
  public:
  vector<string> FindWords(vector<string> &words)
  {
    vector<string> result;
    vector<string> origin = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

    for(auto word : words){
      // traversal the test data
      bool notExist = false;  // record the word is a correct word
      auto it = word.cbegin();
      for(auto originBase : origin){
        if(originBase.find(tolower(*it)) != string::npos){
          for(++it; it != word.cend(); ++it){
            if(originBase.find(tolower(*it)) == string::npos){
              notExist = true;
              break;
            }
          }
        }

        if(notExist){
          break;
        }
      }

      if(!notExist){
        result.push_back(word);
      }
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  Solution keywords;
  vector<string> literal = {"Hello", "Alaska", "Dad", "Peace"};
  vector<string> result = keywords.FindWords(literal);

  cout << endl << "***Result Output***" << endl;
  for(auto key : result){
    cout << key << endl;
  }

  return 0;
}
