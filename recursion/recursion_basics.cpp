#include <iostream>
using namespace std;

void printNum(int n)
{
     if (n == 0)
     {
          return;
     }
     cout << n << " ";
     printNum(n - 1);
}

int main()
{
     printNum(100);
     return 0;
}