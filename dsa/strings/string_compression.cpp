#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Input: chars = ["a","a","b","b","c","c","c"]
Output: 6
Explanation: The groups are "aa", "bb", and "ccc".
This compresses to "a2b2c3".
After modifying the input array in-place,
the first 6 characters of chars should be
["a","2","b","2","c","3"].
*/
int compressStr(vector<char> chars)
{
     int n = chars.size();
     int idx = 0;

     for (int i = 0; i < n; i++)
     {
          char ch = chars[i];
          int count = 0;

          while (i < n && chars[i] == ch)
          {
               count++;
               i++;
          }
          if (count == 1)
          {
               chars[idx++] = ch;
          }
          else
          {
               chars[idx++] = ch;
               string str = to_string(count);
               for (char dig : str)
               {
                    chars[idx++] = dig;
               }
          }
          i--;
     }
     chars.resize(idx);
     return idx;
}

int main()
{
     vector<char> num = {'a', 'a', 'a', 'b', 'c', 'c', 'c'};

     int len = compressStr(num);
     cout << len;
     return 0;
}