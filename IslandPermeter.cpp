#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int IslandPerimeter(vector<vector<int>> &grid)
  {
    auto const row = grid.size();
    auto const col = grid[0].size();
    unsigned int perimeter = 0;
    for(int i = 0; i < row; ++i){
      for(int j = 0; j < col; ++j){
        if(grid[i][j]){
          if((i - 1 < 0) || (!grid[i - 1][j])){
            perimeter += 1;
          }
          if((i + 1 == row) || (!grid[i + 1][j])){
            perimeter += 1;
          }
          if((j - 1 < 0) || (!grid[i][j - 1])){
            perimeter += 1;
          }
          if((j + 1 == col) || (!grid[i][j + 1])){
            perimeter += 1;
          }
        }
      }
    }

    return perimeter;

    // const unsigned int MAXSIZE = 1000;
    // int resizeGrid[MAXSIZE][MAXSIZE] = {{0}};
    // auto const row = grid.size();
    // auto const col = grid[0].size();
    // for(int i = 0; i < row; ++i){
    //   for(int j = 0; j < col; ++j){
    //     resizeGrid[i + 1][j + 1] = grid[i][j];
    //   }
    // }
    //
    // int perimeter = 0;
    // for(int i = 1; i < row + 1; ++i){
    //   for(int j = 1; j < col + 1; ++j){
    //     if(resizeGrid[i][j]){
    //       if(!resizeGrid[i - 1][j]){
    //         perimeter += 1;
    //       }
    //       if(!resizeGrid[i + 1][j]){
    //         perimeter += 1;
    //       }
    //       if(!resizeGrid[i][j - 1]){
    //         perimeter += 1;
    //       }
    //       if(!resizeGrid[i][j + 1]){
    //         perimeter += 1;
    //       }
    //     }
    //   }
    // }
    //
    // return perimeter;
  }
};

int main(int argc, char **argv)
{
  Solution island;
  vector<vector<int>> test = {{1}};//{{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
  unsigned int perimeter = island.IslandPerimeter(test);
  cout << "Perimeter is " << perimeter << endl;

  return 0;
}
