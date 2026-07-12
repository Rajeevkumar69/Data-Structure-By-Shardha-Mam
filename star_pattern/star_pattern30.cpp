#include <iostream>
using namespace std;

/*
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/
int main()
{
     int flag, k = 0, p;
     for (int i = 1; i <= 5; i++)
     {
          if (i % 2 == 1)
          {
               k = k + 1;
          }
          else
          {
               k--;
               k = k + i;
          }
          flag = 1;
          p = k;
          for (int j = 1; j <= 9; j++)
          {
               if (j <= i + i - 1)
               {

                    if (flag == 1)
                    {

                         cout << p;
                         if (i % 2)
                         {
                              p++;
                              k++;
                         }
                         else
                         {
                              p--;
                         }
                    }
                    else
                    {
                         cout << "*";
                    }
                    flag = 1 - flag;
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