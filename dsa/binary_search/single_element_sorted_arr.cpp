#include <iostream>
#include <vector>
using namespace std;

int findSignleElementInSortedArray(vector<int> arr)
{
     int size = arr.size(), start = 0, end = size - 1;
     while (start <= end)
     {
          int mid = start + (end - start) / 2;

          if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
          {
               return arr[mid];
          }
          if (mid % 2 == 0)
          {
               if (arr[mid] == arr[mid + 1])
               {
                    start = mid + 2;
               }
               else
               {
                    end = mid;
               }
          }
          else
          {
               if (arr[mid] == arr[mid - 1])
               {
                    start = mid + 1;
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
     vector<int> nums = {
         1,
         1,
         2,
         3,
         3,
         4,
         4,
     };
     cout << findSignleElementInSortedArray(nums);
     return 0;
}