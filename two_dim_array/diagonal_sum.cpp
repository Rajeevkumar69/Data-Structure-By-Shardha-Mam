#include <iostream>
using namespace std;

int calculateDiagonalSum(int mat[][4], int row, int col)
{
     int sum = 0;
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               if (i == j)
               {
                    sum += mat[i][j];
               }
               else if (j == col - i - 1)
               {
                    sum += mat[i][j];
               }
          }
     }
     return sum;
}

int main()
{
     int matrix[4][4] = {{1, 2, 6, 5}, {2, 0, 2, 1}, {7, 8, 9, 0}, {4, 5, 6, 1}};
     int row = 4, col = 4;
     cout << calculateDiagonalSum(matrix, row, col);
     return 0;
}