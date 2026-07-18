#include <iostream>
using namespace std;

int gcd(int a, int b)
{
     while (a > 0 && b > 0)
     {
          if (a > b)
          {
               a = a % 10;
          }
          else
          {
               b = b % 10;
          }
     }
     if (a == 0)
          return b;
     return a;
}

int main()
{
     cout << gcd(10, 24);
     return 0;
}