#include <iostream>
using namespace std;

int main()
{
     int k = 0, x;

     for (int i = 0; i <= 9; i++)
     {
          i < 5 ? k++ : k--;
          x = 1;
          for (int j = 0; j <= 5; j++)
          {
               if (j >= 6 - k)
               {
                    cout << x;
                    x++;
               }
               else
               {
                    cout << " ";
               }
          }
          cout << "\n";
     }
     return 0;
}