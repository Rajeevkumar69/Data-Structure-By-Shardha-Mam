#include <iostream>
using namespace std;

/*
A
BA
CBA
DCBA
*/
int main()
{
     for (int i = 1; i <= 4; i++)
     {
          char k = 64 + i;
          for (int j = 1; j <= 4; j++)
          {
               if (j <= i)
               {
                    cout << k--;
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