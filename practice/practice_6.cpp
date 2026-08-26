#include <iostream>
#include <vector>
using namespace std;

//  Flatten 2D array
vector<vector<int>> mat = {{1, 2}, {3, 6}};

int main()
{
     int n = mat.size(), m = mat[0].size();
     vector<int> ans;

     for (int i = 0; i < n; i++)
     {

          for (int j = 0; j < m; j++)
          {

               ans.push_back(mat[i][j]);
          }
     }
     return ans;
}
// Transpose 2D Matrix

vector<vector<int>> mat = {{1, 2}, {2, 6}};

int main()
{
     int n = mat.size(), m = mat[0].size();

     if (n != m)
     {
          return;
     }

     for (int i = 0; i < n; i++)
     {

          for (int j = i + 1; j < m; j++)
          {

               swap(mat[i][j], mat[j][i]);
          }
     }
}