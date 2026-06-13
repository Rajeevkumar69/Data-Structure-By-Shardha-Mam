#include <iostream>
using namespace std;

int getDecimalToBinaryNumber(int decimalNumber)
{
     int asnwer = 0;
     int power = 1;

     while (decimalNumber > 0)
     {
          int reminder = decimalNumber % 2;
          decimalNumber = decimalNumber / 2;
          asnwer += (reminder * power);
          power = power * 10;
     }
     return asnwer;
}

int getBinaryToDecimalNumber(int binaryNumber)
{
     int answer = 0, power = 1;
     while (binaryNumber > 0)
     {
          int remainder = binaryNumber % 10;
          answer += remainder * power;

          binaryNumber /= 10;
          power *= 2;
     }
     return answer;
}

int main()
{
     // for (int i = 1; i <= 10; i++)
     // {
     //      cout << getDecimalToBinaryNumber(i);

     //      if (i <= 9)
     //      {
     //           cout << "\n";
     //      }
     // }

     cout << getBinaryToDecimalNumber(101);
     return 0;
}