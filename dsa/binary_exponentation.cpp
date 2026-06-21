#include <iostream>
#include <vector>
using namespace std;

double pow(double x, int n)
{
     long long binaryForms = 1;
     if (binaryForms < 0)
     {
          x = 1 / x;
          binaryForms = -binaryForms;
     }
     double ans = 1;

     while (binaryForms > 0)
     {
          if (binaryForms & 1)
          {
               ans *= x;
          }
          x *= x;
          binaryForms /= 2;
     }
     return ans;
}

int main()
{
     double result = pow(10, 5);
     cout << result;

     return 0;
}