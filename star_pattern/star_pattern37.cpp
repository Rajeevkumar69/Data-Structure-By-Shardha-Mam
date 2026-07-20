#include <iostream>
using namespace std;

/*
Enter Number: 8
   *
  * *
 * * *
* * * *
* * * *
* * * *
*/
void printStars(int n)
{
     int k, flag = 1;
     for (int i = 1, k = 0; i <= n; i++)
     {
          if (i < 4 - k)
          {
               cout << " ";
          }
          else
          {
               if (flag)
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
               flag = 1 - flag;
          }
          if (i == 4 + k)
          {
               k++;
               cout << "\n";
               i = 0;
               flag = 1;
          }
     }
}

int main()
{
     int number;
     cout << "Enter Number: ";
     cin >> number;
     printStars(number);
     return 0;
}