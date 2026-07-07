#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Given an array nums with n objects colored red,
white, or blue, sort them in-place so that objects
of the same color are adjacent, with the colors
in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent
the color red, white, and blue, respectively.

You must solve this problem without using the library's
sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

vector<int> sortColor(vector<int> arr)
{
     int n = arr.size();
     int mid = 0, low = 0, high = n - 1;

     while (mid <= high)
     {
          if (arr[mid] == 0)
          {
               swap(arr[low], arr[mid]);
               mid++;
               low++;
          }
          else if (arr[mid] == 1)
          {
               mid++;
          }
          else
          {
               swap(arr[high], arr[mid]);
               high--;
          }
     }
     return arr;
}

int main()
{
     vector<int> nums = {2, 0, 2, 1, 1, 0};
     vector<int> result = sortColor(nums);

     for (int value : result)
     {
          cout << value << " ";
     }
     return 0;
}
