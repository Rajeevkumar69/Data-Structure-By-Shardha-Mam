#include <iostream>
#include <vector>
using namespace std;

int main()
{
     // Return same element array / vector
     vector<int> arr = {2, 2, 4, 6, 6, 5, 5};
     vector<int> ans;
     int n = arr.size();

     for (int i = 0; i < n; i++)
     {
          int count = 0;

          for (int j = i + 1; j < n; j++)
          {
               if (arr[i] == arr[j])
               {
                    count++;
               }
          }

          if (count == 1)
          {
               ans.push_back(arr[i]);
          }
     }

     //  Remove duplicate from array
     int unique = 0;

     for (int i = 0; i < n; i++)
     {
          unique ^= arr[i];
     }

     return unique;
}