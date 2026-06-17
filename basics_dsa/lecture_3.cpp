//  Find character is lowercase or uppercase

#include <iostream>
using namespace std;

int main()
{
     char a;

     cout << "Enter a charecter: " << endl;
     cin >> a;
     if (a >= 65 && a <= 90)
     {
          cout << "UpperCase";
     }
     else
     {
          cout << "LowerCase";
     }

     // Sum of all given number
     int number = 15;
     int sum = 0;
     for (int i = 1; i <= number; i++)
     {
          sum = sum + i;
     }
     cout << sum;
     return 0;

     // // Sum of all Odd number

     int number = 5;
     int sum = 0;

     for (int i = 1; i <= number; i++)
     {
          if (i % 2 != 0)
          {
               sum += i;
          }
     }

     cout << sum;
     return 0;

     //  Check if number is prime or not

     int number = 3;
     bool isPrime = true;

     for (int i = 2; i <= number - 1; i++)
          for (int i = 2; i * i <= number; i++)
          {
               if (number % i == 0)
               {
                    isPrime = false;
                    break;
               }
          }
     if (isPrime == true)
     {
          cout << "Prime";
     }
     else
     {
          cout << "Non Prime";
     }
     return 0;

     // Sum of all numbers from 1  to N which are divisible by 3
     //  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
     // 3 6 9 12 15 18 = 63

     int number = 20;
     int sum = 0;

     for (int i = 1; i <= number; i++)
     {
          if (i % 3 == 0)
          {
               sum += i;
          }
     }
     cout << sum;
     return 0;

     // Print factorial of Number N

     int number = 5;
     int result = 1;
     for (int i = 1; i <= number; ++i)
     {
          result *= i;
     }
     cout << result;

     return 0;
}