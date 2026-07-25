#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
int main()
{
     vector<int> nums = {3, 3, 3, 3, 3, 3};
     int n = nums.size();

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (nums[i] == nums[j])
               {
                    cout << nums[i];
                    return 0;
               }
          }
     }
     cout << -1 << "," << -1;
     return 0;
}