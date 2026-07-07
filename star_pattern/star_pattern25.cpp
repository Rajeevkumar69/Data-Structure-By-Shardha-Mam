#include <iostream>
using namespace std;

void printPattern(int n)
{
     for (int i = 1; i <= 2 * n - 1; i++)
     {
          int stars;

          if (i <= n)
               stars = i;
          else
               stars = 2 * n - i;

          for (int j = 1; j <= stars; j++)
          {
               cout << "*";
          }

          cout << "\n";
     }
}

int main()
{
     printPattern(4);
     return 0;
}