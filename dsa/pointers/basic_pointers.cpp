#include <iostream>
using namespace std;

void pointerOperation()
{
     int arr[] = {10, 20, 30, 40};
     int *ptr = arr;

     cout << *(ptr + 1) << endl;
     cout << *(ptr + 3) << endl;
     ptr++;
     cout << *ptr << endl;
}

int main()
{
     int a = 5;
     int *p = &a;
     int **q = &p;

     cout << a << endl;
     cout << *p << endl;
     cout << **q << endl;
     cout << *q << endl;

     // Pointer Arithmetic
     cout << p << endl;
     p++;
     // p--;
     cout << p << endl;

     pointerOperation();

     return 0;
}