#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

bool isAlphaNum(char ch)
{
     if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
     {
          return true;
     }
     return false;
}

bool checkPalindrome(string letter)
{
     int st = 0, end = letter.length() - 1;

     while (st < end)
     {
          if (!isAlphaNum(letter[st]))
          {
               st++;
               continue;
          }
          if (!isAlphaNum(letter[end]))
          {
               end--;
               continue;
          }

          if (tolower(letter[st]) != tolower(letter[end]))
          {
               return false;
          }
          st++;
          end--;
     }
     return true;
}

int main()
{
     string st = "A man, a plan, a canal: Panama"; // true
     bool result = checkPalindrome(st);
     cout << result;

     return 0;
}