#include <iostream>
using namespace std;

/*
Enter Number: 5
0
01
024
0369
0481216
*/
void printStars(int n)
{
     for (int i = 1; i <= n; i++)
     {
          int k = 0;
          for (int j = 1; j <= n; j++)
          {
               if (j <= i)
               {
                    cout << k;
                    k = k + i - 1;
               }
               else
               {
                    cout << " ";
               }
          }
          // k++;
          cout << "\n";
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