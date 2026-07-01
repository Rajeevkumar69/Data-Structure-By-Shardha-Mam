#include <iostream>
using namespace std;

int main()
{
     for (int i = 1; i <= 3; i++)
     {
          int k = 1;
          for (int j = 1; j <= 5; j++)
          {
               if (j <= 2 * i - 1)
               {
                    cout << k++;
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