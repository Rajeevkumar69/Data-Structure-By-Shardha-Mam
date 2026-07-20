#include <iostream>
using namespace std;

int main()
{
     // int matrix[2][4] = {{1, 2, 3, 4}, {2, 3, 6, 5}} // init matrix

     int matrix[3][3];
     cout << "Enter numbers: ";

     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               cin >> matrix[i][j];
          }
     }

     cout << "\n";

     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               cout << matrix[i][j] << " ";
          }
          cout << "\n";
     }

     return 0;
}