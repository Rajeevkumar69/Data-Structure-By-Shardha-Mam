#include <iostream>
using namespace std;
/*
     EASY
     n = 12013020
     calculate the total non-zero numb.
     & multiply with total count of non-zero number
*/

int main()
{
     int n = 12013020;
     int sum = 0, count = 0;

     while (n != 0)
     {
          int lastDigit = n % 10;

          if (lastDigit > 0)
          {
               sum += lastDigit;
               count++;
          }
          n /= 10;
     }
     cout << sum * count;
     return 0;
}