#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Brute force approach
int main()
{

     vector<int> num = {5, 2, 11, 7, 15};
     int n = num.size();
     int target = 9;

     for (int i = 0; i < n; i++)
     {
          int firstPair = num[i];

          for (int j = i + 1; j < n; j++)
          {

               int secondPair = num[j];
               int sum = firstPair + secondPair;

               if (sum == target)
               {
                    cout << num[i] << "," << num[j];
                    return 0;
               }
          }
     }
     cout << -1 << "," << -1;
     return 0;
}

// Tow Sum using Two pointers (Linear Search approach)
int main()
{
     vector<int> arr = {5, 2, 11, 7, 15};
     vector<int> num = arr;

     sort(num.begin(), num.end());

     int n = num.size(), target = 26;
     int st = 0, end = n - 1;

     while (st < end)
     {
          int sum = num[st] + num[end];

          if (sum == target)
          {
               cout << st << "," << end;
               return 0;
          }

          if (sum < target)
          {
               st = st + 1;
          }
          else
          {
               end = end - 1;
          }
     }

     cout << -1 << "," << -1;
     return 0;
}