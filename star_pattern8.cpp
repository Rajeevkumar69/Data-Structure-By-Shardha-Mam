#include <iostream>
using namespace std;

int main()
{
     char letter;
     for (int i = 1; i <= 4; i++)
     {
          letter = 'A';
          for (int j = 1; j <= 7; j++)
          {
               if (j <= 5 - i || j >= 3 + i)
               {
                    cout << letter;
                    if (j < 4)
                    {
                         letter++;
                    }
                    else
                    {
                         letter--;
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