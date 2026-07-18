#include <iostream>
#include <string>
using namespace std;

string checkPrime(int n)
{
     for (int i = 2; i * i <= n; i++)
     {
          if (i % 2 == 0)
          {
               return "Non Prime";
          }
     }
     return "Prime";
}

int main()
{
     int num;
     cout << "Enter Number: ";
     cin >> num;
     string result = checkPrime(num);
     cout << result;
     return 0;
}