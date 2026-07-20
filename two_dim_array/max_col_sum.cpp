#include <iostream>
#include <algorithm>
using namespace std;

int getMaxColSum(int mat[][3], int row, int cols)
{
     int maxColSum = INT_MIN;
     for (int i = 0; i < cols; ++i)
     {
          int colSum = 0;
          for (int j = 0; j < row; ++j)
          {
               colSum += mat[j][i];
          }
          maxColSum = max(maxColSum, colSum);
     }
     return maxColSum;
}

int main()
{
     int matrix[2][3] = {{1, 2, 3}, {5, 6, 9}};

     int row = 2, cols = 3;
     cout << getMaxColSum(matrix, row, cols);
     return 0;
}