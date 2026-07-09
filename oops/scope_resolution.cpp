#include <iostream>
using namespace std;

int a = 10;

int main()
{
     int a = 5;
     cout << a << endl;
     cout << ::a << endl; // scope resolution (operator ::)
     return 0;
}