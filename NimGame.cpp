#include <iostream>

using namespace std;

class Solution
{
public:
  bool CanWinNim(int n)
  {
    bool nim = true;
    if(0 == n % 4){
      return false;
    }

    return nim;
  }
};

int main(int argc, char **argv)
{
  Solution nim;
  bool result = nim.CanWinNim(7);
  cout << "Nim result is " << result << endl;

  return 0;
}
