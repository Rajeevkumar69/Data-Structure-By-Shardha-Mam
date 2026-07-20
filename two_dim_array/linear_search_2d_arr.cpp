#include <iostream>
#include <utility>
using namespace std;

pair<int, int> findMatrixCell()
{
     int matrix[3][2] = {{1, 2}, {8, 0}, {7, 3}};
     int rows = 3;
     int cols = 2;
     int target = 0;

     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               if (matrix[i][j] == target)
               {
                    return make_pair(i, j);
               }
          }
     }
     return make_pair(-1, -1);
}

int main()
{
     auto cell = findMatrixCell();
     cout << "Found at: (" << cell.first << ", " << cell.second << ")\n";

     return 0;
}