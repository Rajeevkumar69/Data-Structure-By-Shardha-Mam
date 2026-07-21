#include <iostream>
using namespace std;

int main()
{
     int num = 12366;
     int sum = 0;
     for (int i = 0; i < 5; i++)
     {
          int lastDigit = num % 10;
          sum += lastDigit;
          num = num / 10;
     }
     cout << "Total: " << sum << "\n";
     cout << "Hello Chamcham Gupta";
     return 0;
}