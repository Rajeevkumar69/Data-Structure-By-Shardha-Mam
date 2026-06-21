#include <iostream>
using namespace std;

int main()
{

     for (int i = 0; i <= 7; i++)
     {
          for (int j = 0; j <= 7; j++)
          {
               if (j == i || j == 8 - i)
               {
                    cout << " ";
                    if (i == j)
                    {
                         printf("\\");
                    }
                    else
                    {
                         printf("/");
                    }
               }
               else
               {
                    cout << "*";
               }
          }
          cout << "\n";
     }
     return 0;
}