#include <iostream>
#include <string.h>
using namespace std;

string removeOccurance(string s, string data)
{
     while (s.length() > 0 && s.find(data) < s.length())
     {
          s.erase(s.find(data), data.length());
     }
     return s;
}

int main()
{
     string st = "abcbnvabcbc";
     string part = "abc";

     string result = removeOccurance(st, part);
     cout << result;
     return 0;
}