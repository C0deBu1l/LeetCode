#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int baseNumberOne = 5;
  int baseNumberTwo = 1;
  int counter = 0;

  while(baseNumberOne || baseNumberTwo){
    if((baseNumberOne & 1) != (baseNumberTwo & 1)){
      ++counter;
    }

    baseNumberOne >>= 1;
    baseNumberTwo >>= 1;
  }

  cout << "Hamming Distance is: " << counter << endl;

  return 0;
}
