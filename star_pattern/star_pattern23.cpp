#include <iostream>
using namespace std;

int main()
{
     for (int i = 1; i <= 6; i++)
     {
          int k = 1;
          for (int j = 1; j <= 6; j++)
          {
               if (j <= i)
               {
                    if (k == -1)
                         k = 1;
                    cout << k--;
               }
               else
                    cout << " ";
          }
          cout << "\n";
     }
     return 0;
}