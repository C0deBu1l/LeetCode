#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution
{
  public:
  vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
  {
    vector<string> result;
    
    if(list1.size() > list2.size()){
      result = restaurant(list2, list1);
    }else{
      result = restaurant(list1, list2);
    }
    
    return result;
  }

  vector<string> restaurant(vector<string> &list1, vector<string> &list2)
  {
    vector<string> result;

    int min = list1.size() + list2.size();
    for(int i = 0; i < list1.size(); ++i){
      for(int j = 0; j < list2.size(); ++j){
        if(list1[i] == list2[j]){
          if(min > (i + j)){
            result.clear();
            min = i + j;
            result.push_back(list1[i]);
          }else if(min == (i + j)){
            result.push_back(list1[i]);
          }else{
            
          }
        }
      }
    }

    return result;
  }
};

int main(int argc, char **argv)
{
  vector<string> list1{"Shogun","Tapioca Express","Burger King","KFC"};
  vector<string> list2{"KFC","Shogun","Burger King"};

  Solution object;
  vector<string> result = object.findRestaurant(list1, list2);
  cout << "=== result ===" << endl;
  for(int i = 0; i < result.size(); ++i){
    cout << result[i] << endl;
  }
  cout << "=== result ===" << endl;

  return 0;
}