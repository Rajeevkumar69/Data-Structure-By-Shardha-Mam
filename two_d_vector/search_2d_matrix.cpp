#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
     int target = 0;

     int row = 3;
     int cols = 4;

     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               if (matrix[i][j] == target)
               {
                    cout << i << "," << j;
                    return 0;
               }
          }
     }
     cout << -1 << "," << -1;
     return 0;
}