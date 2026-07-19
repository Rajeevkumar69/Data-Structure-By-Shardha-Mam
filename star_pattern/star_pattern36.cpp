#include <iostream>
using namespace std;

/*
Enter Number: 5
1
62
1073
131184
15141295
*/
void printStars(int n)
{
     int p, k = 1;
     for (int i = 1; i <= n; i++)
     {
          p = k;
          for (int j = 1; j <= i; j++)
          {
               cout << p;
               p = p - (n - i + j);
          }
          cout << "\n";
          k = k + 1 + n - i;
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