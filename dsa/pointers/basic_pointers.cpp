#include <iostream>
using namespace std;

int main()
{
     int a = 5;
     int *p = &a;
     int **q = &p;

     cout << a << endl;
     cout << *p << endl;
     cout << **q << endl;
     cout << *q << endl;

     cout << p << endl;
     p++;
     cout << p << endl;

     return 0;
}