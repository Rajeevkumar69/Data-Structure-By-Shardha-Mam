#include <iostream>
#include <vector>
using namespace std;

vector<int> nums = {2, 5, 7, 8, 9, 15};
int target = 9;

int findTarget(vector<int> nums)
{
     int n = nums.size();
     int st = 0, end = n - 1;

     while (st < end)
     {
          int mid = st + (end - st) / 2;

          if (nums[mid] == target)
          {
               return mid;
          }
          else if (nums[st] < target)
          {
               st = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
     return 0;
}

vector<int> nums = {1, 2, 3, 4, 9, 8, 7, 6};
int target = 6;

int findTarget(vector<int> &nums)
{
     int n = nums.size();
     int st = 0, end = n - 1;

     while (st <= end)
     {
          int mid = st + (end - st) / 2;

          if (nums[mid] == target)
          {
               return mid;
          }

          if (nums[st] <= nums[mid])
          {
               if (nums[st] <= target && target < nums[mid])
               {
                    end = mid - 1;
               }
               else
               {
                    st = mid + 1;
               }
          }
          else
          {
               if (nums[mid] < target && target <= nums[end])
               {
                    st = mid + 1;
               }
               else
               {
                    end = mid - 1;
               }
          }
     }
     return -1;
}

int main()
{
     return 0;
}