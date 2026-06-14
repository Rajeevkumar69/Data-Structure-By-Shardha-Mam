#include <iostream>
using namespace std;

int printReverse(int number)
{
     int reverse = 0;

     while (number > 0)
     {
          int digit = number % 10;
          reverse = reverse * 10 + digit;
          number /= 10;
     }

     return reverse;
}

int main()
{
     cout << printReverse(1235);

     return 0;
}