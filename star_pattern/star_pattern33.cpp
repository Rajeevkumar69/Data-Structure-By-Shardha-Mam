#include <iostream>
using namespace std;

/*
Enter number of lines: 5
    1
   A B
  1 2 3
 A B C D
1 2 3 4 5
*/

int main()
{
     int k, line, num;
     char alpha;
     cout << "Enter number of lines: ";
     cin >> line;

     for (int i = 1; i <= line; i++)
     {
          k = 1;
          num = 1;
          alpha = 'A';
          for (int j = 1; j <= 2 * line - 1; j++)
          {
               if (j >= line + 1 - i && j <= line - 1 + i)
               {
                    if (k)
                    {
                         if (i % 2 == 1)
                         {
                              cout << num++;
                         }
                         else
                         {
                              cout << alpha++;
                         }
                    }
                    else
                    {
                         cout << " ";
                    }
                    k = 1 - k;
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