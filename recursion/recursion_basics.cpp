#include <iostream>
using namespace std;

void printNum(int n)
{
     if (n == 0)
     {
          return;
     }
     cout << n << " ";
     printNum(n - 1);
}

int calculateFactorial(int num)
{
     if (num == 0)
     {
          return 1;
     }

     return num * calculateFactorial(num - 1);
}

int sum(int n)
{
     if (n == 1)
     {
          return 1;
     }
     return n + sum(n - 1);
}

int main()
{
     printNum(100);
     cout << calculateFactorial(5);
     cout << sum(5);
     return 0;
}