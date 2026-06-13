#include <iostream>
using namespace std;

void printFibonacci(int number)
{
     int a = 0, b = 1;

     for (int i = 1; i <= number; i++)
     {
          cout << a << " ";

          int next = a + b;
          a = b;
          b = next;
     }
}

int main()
{
     printFibonacci(10);
     return 0;
}