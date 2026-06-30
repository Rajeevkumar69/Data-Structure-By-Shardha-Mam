#include <iostream>
using namespace std;

int main()
{
     for (int i = 1; i <= 4; i++)
     {
          int k = 1;
          char l = 65;
          for (int j = 1; j <= 7; j++)
          {
               if (j >= 5 - i && j <= 3 + i)
               {
                    if (j <= 4)
                    {
                         cout << k++;
                    }
                    else if (j <= 7)
                    {
                         cout << l++;
                    }
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