#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> nums, int n, int target)
{

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (nums[i] + nums[j] == target)
               {
                    cout << i << ", " << j;
               }
          }
     }
}

void two_sum(vector<int> &nums, int n, int target)
{
     int st = 0, end = n - 1;
     bool found = false;

     while (st < end)
     {
          int sum = nums[st] + nums[end];

          if (sum == target)
          {
               cout << st << "," << end;
               found = true;
               break;
          }

          if (sum < target)
          {
               st++;
          }
          else
          {
               end--;
          }
     }

     if (!found)
     {
          cout << -1 << "," << -1;
     }
}

int main()
{
     vector<int> arr = {1, 3, 5, 7};
     int size = arr.size();
     int target = 4;

     two_sum(arr, size, target);
     return 0;
}