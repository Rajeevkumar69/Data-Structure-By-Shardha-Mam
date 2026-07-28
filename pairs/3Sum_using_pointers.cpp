/*
3 Sum Using Two Pointers Approach to avoid TLE,
Using the same way we can also solve the 4Sum problem
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums, int target)
{

     sort(nums.begin(), nums.end());
     int n = nums.size();
     vector<vector<int>> ans;

     for (int i = 0; i < n; i++)
     {
          if (i > 0 && nums[i] == nums[i - 1])
               continue;

          int j = i + 1, k = n - 1;

          while (j < k)
          {
               long long sum = (long long)nums[i] +
                               (long long)nums[j] +
                               (long long)nums[k];

               if (sum < target)
               {
                    j++;
               }
               else if (sum > target)
               {
                    k--;
               }
               else
               {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1])
                         j++;
               }
          }
     }
     return ans;
}

int main()
{
     vector<int> arr = {-1, 0, 1, 2, -4, -4};
     int t = 0;

     vector<vector<int>> result = threeSum(arr, t);

     for (auto &trip : result)
     {
          for (int x : trip)
          {
               cout << x << " ";
          }
          cout << "\n";
     }
}