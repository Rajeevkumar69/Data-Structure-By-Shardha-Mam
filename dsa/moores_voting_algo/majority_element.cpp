#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> nums = {1, 2, 1, 1, 1};

     int size = nums.size();
     int freq = 0, ans = 0;

     for (int i = 0; i < size; i++)
     {
          if (freq == 0)
          {
               ans = nums[i];
          }
          if (nums[i] == ans)
          {
               freq++;
          }
          else
          {
               freq--;
          }
     }

     // If not any majority elements available in array/vector
     int count = 0;
     for (int value : nums)
     {
          if (value == ans)
          {
               count++;
          }
     }
     if (count > size / 2)
     {
          cout << ans;
     }
     else
     {
          cout << -1;
     }
     return 0;
}