#include <iostream>
using namespace std;

/*
    *
    *
    *
  |**
* | *
**|
***
**
*
*/
int main()
{
     int n, k;
     cout << "Enter value: ";
     cin >> n;

     for (int i = 1; i <= 3 * n; i++)
     {
          for (int j = 1; j <= 2 * n - 1; j++)
          {
               if (i <= n)
               {
                    if (j >= 2 * n - 1)
                    {
                         cout << "*";
                    }
                    else
                    {
                         cout << " ";
                    }
               }
               else if (i <= 2 * n)
               {
                    k = 0;
                    if (j == n)
                    {
                         k = 1;
                         cout << "|";
                    }
                    if (j <= (i - n - 1))
                    {
                         k = 1;
                         cout << "*";
                    }
                    if (j >= i)
                    {
                         k = 1;
                         cout << "*";
                    }
                    if (k == 0)
                    {
                         cout << " ";
                    }
               }
               else if (i <= 3 * n)
               {
                    if (j <= 3 * n + 1 - i)
                    {
                         cout << "*";
                    }
                    else
                    {
                         cout << " ";
                    }
               }
          }
          cout << "\n";
     }
     return 0;
}