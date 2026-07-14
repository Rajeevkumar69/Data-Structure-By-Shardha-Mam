#include <iostream>
using namespace std;

// Write a program to calculate the fibonacci number

int calculateFibonacci(int n)
{
     int p1 = 0;
     int p2 = 1;
     if (n == 0)
          return 0;
     if (n == 1)
          return 1;

     for (int i = 2; i <= n; i++)
     {
          int curr = p1 + p2;
          p1 = p2;
          p2 = curr;
     }
     return p2;
}

int main()
{
     int num = 7;
     int result = calculateFibonacci(num);
     cout << result;
     return 0;
}
