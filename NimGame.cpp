#include <iostream>

using namespace std;

class Solution
{
public:
  bool CanWinNim(int n)
  {
    bool nim = false;
    if(n % 3 == 0){
      nim = true;
    }else if(n % 2 == 0){
      nim = true;
    }

    return nim;
  }
};

int main(int argc, char **argv)
{
  Solution nim;
  bool result = nim.CanWinNim(4);
  cout << "Nim result is " << result << endl;

  return 0;
}
