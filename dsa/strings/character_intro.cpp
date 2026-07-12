#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     char ch[10] = {'c', 'h', 'a', 'm', 'c', 'h', 'a', 'm'};
     char chTwo[10];

     cin.getline(chTwo, 8);
     cout << chTwo;

     cout << strlen(ch) << " ";

     for (char value : ch)
     {
          cout << value;
     }

     return 0;
}