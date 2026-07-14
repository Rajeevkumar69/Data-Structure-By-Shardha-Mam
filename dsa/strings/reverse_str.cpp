#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

     string str = "Chamcham";

     for (int i = str.length(); i >= 0; i--)
     {
          cout << str[i];
     }

     // Two pointers approach
     int st = 0, end = str.size() - 1;

     while (st < end)
     {
          swap(str[st], str[end]);
          st++;
          end--;
     }

     // reverse(str.begin(), str.end());
     cout << str;

     return 0;
}