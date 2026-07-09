#include <iostream>
using namespace std;

int main()
{
     int k = 1, n = 11, m = 0;
     for (int i = 1; i <= 21; i++)
     {
          i <= n ? m++ : m--;
          k = m - 1;
          for (int j = 1; j <= 21; j++)
          {
               if (j >= n + 1 - m && j <= n - 1 + m)
               {
                    cout << (j < n ? k++ % 10 : k-- % 10);
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