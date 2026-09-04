#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> nums = {10, 12, 16, 18, 25, 45};
     int target = 18;

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
          return -1;
     }

     vector<int> nums = {10, 11, 13, 14, 4, 5, 8, 9};

     int target = 4;

     int n = nums.size();
     int st = 0, end = n - 1;

     while (st <= end)
     {
          int mid = st + (end - st) / 2;

          if (nums[mid] == target)
          {
               return mid;
          }

          else if (nums[st] <= nums[mid])
          {
               if (nums[st] <= target && target <= nums[mid])
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
               if (nums[mid] <= target && target <= nums[end])
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