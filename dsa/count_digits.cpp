#include <iostream>
using namespace std;

int countDigits(int n)
{
     int count = 0;
     while (n != 0)
     {
          n % 10;
          count++;
          n = n / 10;
     }
     return count;
}

int main()
{
     int num;
     cout << "Enter Number: ";
     cin >> num;
     int result = countDigits(num);
     cout << result;
     return 0;
}