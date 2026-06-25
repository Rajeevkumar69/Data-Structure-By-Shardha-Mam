#include <iostream>
#include <vector>
using namespace std;

// Find the index of the target value in vector using binary search
int binarySearch()
{
     vector<int> arr = {2, 5, 4, 6, 8, 10, 12, 16};
     int target = 8;
     int start = 0;
     int end = arr.size() - 1;

     while (start <= end)
     {
          int mid = start + (end - start) / 2;

          if (arr[mid] == target)
          {
               return mid;
          }
          else if (arr[mid] < target)
          {
               start = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
     return -1;
}

int main()
{
     cout << binarySearch();
}

// TC => O(logn)
// SC => O(1)