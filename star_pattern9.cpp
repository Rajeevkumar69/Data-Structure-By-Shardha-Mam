#include <iostream>
using namespace std;

int main()
{
     int k = 0;

     for (int i = 1; i <= 7; i++)
     {
          if (i <= 4)
               k = i;
          else
               k = 8 - i;

          for (int j = 1; j <= 7; j++)
          {
               if (j >= 5 - k && j <= 3 + k)
                    cout << "*";
               else
                    cout << " ";
          }

          cout << "\n";
     }

     return 0;
}