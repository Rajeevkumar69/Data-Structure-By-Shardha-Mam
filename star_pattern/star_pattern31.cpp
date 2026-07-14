#include <iostream>
using namespace std;

/*
    A
   CB
  FED
 JIHG
ONMLK
*/
int main()
{
     char ch = 64;
     for (int i = 1; i <= 5; i++)
     {
          ch = ch + 2 * (i - 1) + 1;
          for (int j = 1; j <= 5; j++)
          {
               if (j >= 6 - i)
               {
                    cout << ch--;
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