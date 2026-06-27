#include <iostream>
#include <vector>
using namespace std;

int findPeakIndex(vector<int> arr)
{
     int start = 0;
     int end = arr.size() - 1;

     while (start < end)
     {
          int mid = start + (end - start) / 2;
          if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid])
          {
               return mid;
          }
          else if (arr[mid - 1] < arr[mid])
          {
               start = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
     return start;
}

int main()
{
     vector<int> nums = {1, 2, 5, 6, 9, 8, 7, 4};
     cout << findPeakIndex(nums);
     return 0;
}