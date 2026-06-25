#include <iostream>
#include <vector>
using namespace std;

// Find the target value index in the given vector
int binarySearch()
{
     vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};

     int size = arr.size();
     int target = -1;
     int start = 0;
     int end = size - 1;

     while (start <= end)
     {
          int mid = start + (end / 2);

          if (target > arr[mid])
          {
               start = mid + 1;
          }
          else if (target < arr[mid])
          {
               end = mid - 1;
          }
          else
          {
               return mid;
          }
     }
     return -1;
}

int main()
{
     cout << binarySearch();
}