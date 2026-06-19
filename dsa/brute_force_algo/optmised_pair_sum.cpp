#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
     vector<int> ans;
     int size = nums.size();

     int i = 0, j = size - 1;

     while (i < j)
     {
          int pairSum = nums[i] + nums[j];

          if (pairSum > target)
          {
               j--;
          }
          else if (pairSum < target)
          {
               i++;
          }
          else
          {
               ans.push_back(i);
               ans.push_back(j);
               return ans;
          }
     }
     return ans;
}

int main()
{
     vector<int> nums = {2, 5, 11, 15};
     int target = 17;

     vector<int> ans = pairSum(nums, target);
     cout << ans[0] << "," << ans[1];
     return 0;
}