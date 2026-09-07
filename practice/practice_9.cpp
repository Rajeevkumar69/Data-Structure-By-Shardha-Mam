#include <iostream>
#include <string>
using namespace std;

// Q:: How many times the given substring can form

int countSubStr(string &s, string &t)
{
     int n = s.size();
     int count = 0;

     for (int start = 0; start < n; start++)
     {

          for (int end = start; end < n; end++)
          {
               string sub = s.substr(start, end - start + 1);

               if (sub == t)
               {
                    count++;
               }
          }
     }
     return count;
}

int main()
{
     string s = "bagaagbabag", t = "bag";

     int result = countSubStr(s, t);
     cout << result;

     return 0;
}