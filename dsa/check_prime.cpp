#include <iostream>
#include <string>
using namespace std;

string isPrime(int n)
{
     for (int i = 2; i * i <= n; i++)
     {
          if (n % i == 0)
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
     string result = isPrime(num);
     cout << result;
     return 0;
}