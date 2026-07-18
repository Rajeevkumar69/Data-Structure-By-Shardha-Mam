#include <iostream>
using namespace std;

/*
Enter number: 4
ABCDEFG
ABC EFG
AB   FG
A     G
*/
void printStar(int n)
{
     for (int i = 1; i <= n; i++)
     {
          char k = 65;
          for (int j = 1; j <= n * 2 - 1; j++)
          {
               if (j <= n + 1 - i || j >= n - 1 + i)
               {
                    cout << k;
               }
               else
               {
                    cout << " ";
               }
               k++;
          }
          cout << "\n";
     }
}

int main()
{
     int number;
     cout << "Enter number: ";
     cin >> number;
     printStar(number);
     return 0;
}