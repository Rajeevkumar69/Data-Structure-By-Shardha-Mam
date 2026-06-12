#include <iostream>
using namespace std;

// function to calculate the sun of 1 to N

int calculateSumOfNumber(int number)
{

     int total = 0;

     for (int i = 1; i <= number; i++)
     {
          total += i;
     }
     return total;
}

int main()
{
     cout << calculateSumOfNumber(4);
     return 0;
}