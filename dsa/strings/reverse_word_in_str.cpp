#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWordInStr(string letter)
{
     int n = letter.length();
     string ans = "";

     reverse(letter.begin(), letter.end());

     for (int i = 0; i < n; i++)
     {
          string word = "";

          while (i < n && letter[i] != ' ')
          {
               word += letter[i];
               i++;
          }
          reverse(word.begin(), word.end());

          if (word.length() > 0)
          {
               ans += " " + word;
          }
     }
     return ans.substr(1);
}

int main()
{
     string st = "Red is        Pen";
     string result = reverseWordInStr(st);
     cout << result;
     return 0;
}