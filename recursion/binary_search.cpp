// Recursive binary search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binSearch(vector<int> nums, int target, int st, int end)
{
     sort(nums.begin(), nums.end());
     if (st <= end)
     {
          int mid = st + (end - st) / 2;

          if (nums[mid] == target)
               return mid;
          else if (nums[mid] <= target)
          {
               return binSearch(nums, target, mid + 1, end);
          }
          else
          {
               return binSearch(nums, target, st, mid - 1);
          }
     }
     return -1;
}

int main()
{
     vector<int> arr = {5, 8, 9, 7, 4, 5};
     int tar = 7;
     cout << binSearch(arr, tar, 0, arr.size() - 1);
     return 0;
}