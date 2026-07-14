#include <iostream>
using namespace std;

// write a program to calculate the n factorial

int calculateFactorial(int n)
{
     int result = 1;
     if (n == 0 || n == 1)
     {
          return 1;
     }

     for (int i = n; i >= 1; i--)
     {
          result *= i;
     }
     return result;
}

int main()
{
     int number = 6;
     int result = calculateFactorial(number);
     cout << result;
     return 0;
}