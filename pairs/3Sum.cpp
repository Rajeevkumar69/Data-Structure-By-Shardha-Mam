#include <iostream>
#include <vector>
using namespace std;

//  Brute Force Approach
int main()
{
     vector<int> nums = {-1, 0, 1, 2, -4};
     int target = 0, n = nums.size();

     for (int i = 0; i < n; n++)
     {
          int a = nums[i];
          for (int j = i + 1; j < n; j++)
          {
               int b = nums[j];
               for (int k = j + 1; k < n; k++)
               {
                    int c = nums[k];
                    if (a + b + c == target)
                    {
                         cout << i << "," << j << "," << k;
                         return 0;
                    }
               }
          }
     }
     cout << -1 << "," << -1 << "," << -1;
     return 0;
}