// Maximum Nesting Depth of the Parentheses

#include <iostream>
#include <string>
using namespace std;

int maxDepth(string &str)
{
     int curr = 0, res = 0;

     for (char ch : str)
     {
          if (ch == '(')
          {
               curr++;
               res = max(res, curr);
          }
          else if (ch == ')')
          {
               curr--;
          }
     }

     return res;
}

int main()
{
     string str = "(1+(2*3)+((8)/4))+1";

     int result = maxDepth(str);

     cout << result;

     return 0;
}