#include <iostream>
using namespace std;

/*
Enter odd number: 3
* *
 *
* *
*/
void printStar(int n)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (j == i || j == n + 1 - i)
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
          }
          cout << "\n";
     }
}

int main()
{
     int number;
     cout << "Enter odd number: ";
     cin >> number;
     printStar(number);
     return 0;
}