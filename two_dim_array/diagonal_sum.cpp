#include <iostream>
using namespace std;

int calculateDiagonalSum(int mat[][4], int row, int col)
{
     int sum = 0;
     for (int i = 0; i < row; i++)
     {
          sum += mat[i][i];

          if (i != col - i - 1)
          {
               sum += mat[i][col - i - 1];
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